//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_INTERPRETER_H
#define FLIGHTSIMULATOR_INTERPRETER_H

#include "../Commands/Command.h"
#include "../Lexer/Lexer.h"
#include "../Parser/Parser.h"
#include "../Commands/OpenServer.h"
#include "../Commands/Connect.h"
#include "../Commands/DefineVar.h"
#include "../Commands/PutVar.h"
#include "../Commands/If.h"
#include "../Commands/While.h"
#include "SymbolMap.h"

class Interpreter {
private:
    Lexer lexer;
    Parser parser;
public:
    // Constructors
    Interpreter();
    explicit Interpreter(std::string fileName);
    // Destructors
    ~Interpreter();
    // File
    bool setFile(std::string fileName);
    bool fileSet();
    // Interpret functions
    void executeFile();
    void executeLine(std::string line);
private:
    // Interpretations
    Command* interpretNextRow();
    Command* interpretNextBlockRow(Command* nextCommand, bool* exit);
    Command* interpretLine(std::string line);
    Command* interpret(CodeRow& row);
    // Unique interpretations
    Command* interpretIf(CodeRow& row);
    Command* interpretWhile(CodeRow& row);
    void setBlock(Condition* condition);
};



#endif //FLIGHTSIMULATOR_INTERPRETER_H
