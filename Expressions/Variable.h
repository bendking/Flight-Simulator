//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_VARIABLE_H
#define FLIGHTSIMULATOR_VARIABLE_H


#include "Expression.h"
#include "../Interpreter/SymbolMap.h"
#include "../Interpreter/Symbol.h"
#include <string>


class Variable : public Expression {
private:
    std::string name;
public:
    Variable(std::string _name);
    double calculate();
};


#endif //FLIGHTSIMULATOR_VARIABLE_H
