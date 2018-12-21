//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_DEFINEVAR_H
#define FLIGHTSIMULATOR_DEFINEVAR_H

#include "Command.h"
#include "Expression.h"

class DefineVar: public Command {

    Expression *exp = nullptr;
    std::string address;
    std::string name;
public:
    DefineVar(std::string _name, std::string _address);
    DefineVar(std::string _name, Expression * _exp);
    void execute();

    ~DefineVar();
};


#endif//FLIGHTSIMULATOR_DEFINEVAR_H
