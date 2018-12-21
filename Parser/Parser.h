//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_PARSER_H
#define FLIGHTSIMULATOR_PARSER_H

#include "stdio.h"
#include <string>
#include <map>
#include <unordered_map>
#include "../Commands/Command.h"
#include "../Lexer/CodeRow.h"
#include "../Expressions/ExpressionLibrary.h"



class Parser {
private:
public:
    Parser();

    Command* parse(CodeRow& row);
    Expression* shuntingYard(std::string s);
};


#endif //FLIGHTSIMULATOR_PARSER_H
