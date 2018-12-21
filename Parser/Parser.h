//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_PARSER_H
#define FLIGHTSIMULATOR_PARSER_H

#include "../Commands/CommandLibrary.h"
#include "../Expressions/ExpressionLibrary.h"
#include "../Commands/Command.h"
#include "../Lexer/CodeRow.h"
#include "stdio.h"
#include <string>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstring>


class Parser {
private:
public:
    Parser();
    Command* parse(CodeRow& row);
    Expression* shuntingYard(std::string s);
};


#endif //FLIGHTSIMULATOR_PARSER_H
