//
// Created by ben on 12/15/18.
//

#include "DefineVar.h"

// Setting value to new var
DefineVar::DefineVar(std::string _name, Expression *_exp)
{
    exp = _exp;
    name = _name;
}

// Here we bind var and address
DefineVar::DefineVar(std::string _name, std::string _address)
{
    address = _address;
    name = _name;
}

// Here we bind two different vars together
DefineVar::DefineVar(std::string _name, std::string _var, bool bindVar)
{
    address = _var;
    name = _name;
}

DefineVar::~DefineVar() {
    if (exp != nullptr) {
        delete exp;
    }
}
/*
 * Expected arguments:
 * 0 = variable name
 * 1 = numerical value OR bind address
 * Note - it is given that the same variable won't be declared twice
 */
void DefineVar::execute() {
    // Insert new variable to Symbol Map
    symbolMap.emplace(std::make_pair(name, new Symbol()));
    // Check whether given a numerical value or bind address
    if (exp != nullptr) { // If given number, set value (pure value variable)
        symbolMap[name]->setValue(exp->calculate(), true);
    } else { // If given bind address, set binding (local value will update automatically)
        if (var == "") {
            symbolMap[name]->setPath(address);
        } else {
            symbolMap[name] = symbolMap[var];
        }
    }
}
