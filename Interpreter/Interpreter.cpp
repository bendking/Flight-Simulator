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
void Interpreter::executeFile() {
    if (!fileSet()) {
        throw std::logic_error("File not set");
    }

    Command* command = interpretNextRow();
    // Loop will stop once an empty row has been reached
    while (command != nullptr) {
        // Execute then deallocate command
        command->execute();
        delete command;
        // Get next command
        command = interpretNextRow();
    }
}

void Interpreter::executeLine(std::string line) {
    Command* command = interpretLine(line);
    command->execute();
    delete command;
}

// Interpret next command in file (script style)
Command* Interpreter::interpretNextRow() {
    if (fileSet()) {
        // Get lexed line
        CodeRow lexedLine = lexer.nextRow();

        // If it's empty, return
        if (lexedLine.isEmpty()) {
            return nullptr;
        }

        // Else, interpret
        return interpret(lexer.nextRow());
    }
}

// Interpret a specific line given (command line style)
Command* Interpreter::interpretLine(std::string line) {
    return interpret(lexer.lexLine(line));
}

// Interpret a given row/command
Command* Interpreter::interpret(CodeRow& lexedLine) {
    // TODO (BEN): Lock values manipulated by threads during the run of this function
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

Command* Interpreter::interpretIf(CodeRow& row) {
    If* thisIf = new If(row.getArgs());
    setBlock(thisIf);
    return thisIf;
}

Command* Interpreter::interpretWhile(CodeRow &row) {
    While* thisWhile = new While(row.getArgs());
    setBlock(thisWhile);
    return thisWhile;
}

// Add commands inside condition block to its command list
void Interpreter::setBlock(Condition* condition) {
    Command* nextCommand = interpretNextRow();
    // Add all commands to this If block until '}' or EOF reached
    while (nextCommand != nullptr) {
        condition->addCommand(nextCommand);
    }
}
