//
// Created by ben on 12/15/18.
//

#include "Interpreter.h"

//
// Class construction
//

// Construct without file
Interpreter::Interpreter() : lexer(), parser() {

}

// Construct with file
Interpreter::Interpreter(std::string fileName) : Interpreter() {
    setFile(fileName);
}

// Destructors
Interpreter::~Interpreter() {

    // Exit other threads
    stopThreads = true;

    char* b;

    // Wait for them to complete
    for (auto th : threadsVector)
        pthread_join(*th, (void**)b);

    // Delete all threads
    for (auto th : threadsVector)
        delete th;

    // Delete symbol map
    for (const auto &p : symbolMap)
        delete p.second;

    // Close connections    
    ClientBuilder builder;
    builder.stop();

    // Delete mutex
    MutexSingle mutexSingle;
    mutexSingle.destroy();
}

// Set file on Lexer, return if set succeeded
bool Interpreter::setFile(std::string fileName) {
    return lexer.setFile(fileName);
}

// Return if a file is set on Lexer
bool Interpreter::fileSet() {
    return lexer.fileSet();
}

//
// Class typical commands
//

// Interpret the entire file set on this object
void Interpreter::executeFile()
{
    if (!fileSet()) {
        throw std::logic_error("File not set");
    }

    vector<Command*> usedCommands;
    Command* command = interpretNextRow();
    // Loop will stop once an empty row has been reached
    while (command != nullptr) {
        // Execute then deallocate command
        command->execute();
        usedCommands.push_back(command);
        // Get next command
        command = interpretNextRow();
    }
    // Delete all used commands
    for (Command* command : usedCommands) {
        delete command;
    }
}

void Interpreter::executeLine(std::string line)
{
    Command* command = interpretLine(line);
    command->execute();
    delete command;
}

// Interpret next command in file (script style)
Command* Interpreter::interpretNextRow()
{
    if (fileSet()) {
        // Get lexed line
        CodeRow lexedLine = lexer.nextRow();

        // If it's empty, return
        if (lexedLine.isEmpty()) {
            return nullptr;
        }

        // Else, interpret
        return interpret(lexedLine);
    }
    return nullptr;
}

// Interpret next command in file (script style)
Command* Interpreter::interpretNextBlockRow(Command* nextCommand, bool* exit)
{
    CodeRow lexedLine = lexer.nextRow(); // Line to be parsed
    // If empty row or '}': null command
    if (lexedLine.isEmpty() || lexedLine[0].front() == '}'){
        nextCommand = nullptr;
    }
        // Check for curly brackets at beginning/ending of the line
    else {
        // If first letter is '{', ignore it
        if (lexedLine[0].front() == '{') {
            lexedLine.removeFirstLetter(); // Remove first letter '{'
        }
        // If last letter is '}', add command then exit
        if (lexedLine[lexedLine.size()-1].back() == '}') {
            lexedLine.removeLastLetter(); // Remove last letter '}'
            *exit = true; // Mark to exit after adding this command
        }
        // Finally, interpret line normally
        nextCommand = interpret(lexedLine);
    }

    return nextCommand;
}

// Interpret a specific line given (command line style)
Command* Interpreter::interpretLine(std::string line) {
    return interpret(lexer.lexLine(line));
}

// Interpret a given row/command
Command* Interpreter::interpret(CodeRow& lexedLine)
{
    // If the row read was empty OR end of block reached, return NULL
    if (lexedLine.isEmpty() || lexedLine[0] == "}") {
        return nullptr;
    }

    // If the command is a condition, interpret as a condition (parse next lines until '}')
    if (lexedLine[0] == "if") {
        return interpretIf(lexedLine);
    }

    if (lexedLine[0] == "while") {
        return interpretWhile(lexedLine);
    }


    // Regular case //
    // Get command to heap-allocated command
    Command* command = parser.parse(lexedLine);
    return command;
}

//
// Conditions (if & while)
//

Command* Interpreter::interpretIf(CodeRow& row)
{

    // Initialize If
    Condition* thisIf = parser.parseCondition(row);
    // Set commands inside block
    setBlock(thisIf);
    return thisIf;
}

Command* Interpreter::interpretWhile(CodeRow &row)
{

    // Initialize While
    Condition* thisWhile = parser.parseCondition(row);

    // Set commands inside block
    setBlock(thisWhile);
    return thisWhile;
}

// Add commands inside condition block to its command list
void Interpreter::setBlock(Condition* condition)
{
    bool exit = false;
    Command* nextCommand = nullptr; // Command to be added

    nextCommand = interpretNextBlockRow(nextCommand, &exit);
    // Add all commands to this If block until '}' or EOF reached
    while (nextCommand != nullptr) {
        condition->addCommand(nextCommand);
        // Don't interpret next line
        if (exit) {
            break;
        }
        // Interpret next line
        nextCommand = interpretNextBlockRow(nextCommand, &exit);
    }
}
