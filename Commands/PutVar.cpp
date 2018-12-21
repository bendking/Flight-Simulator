//
// Created by ben on 12/18/18.
//

#include "PutVar.h"


PutVar::PutVar(std::string _name, Expression *_exp)
{
    exp = _exp;
    name = _name;
}
PutVar::PutVar(std::string _name, std::string _address)
{
    address = _address;
    name = _name;
}

/*
 * Expected arguments:
 * 0 = variable name
 * 1 = numerical value OR bind address
 */
void PutVar::execute()
{
    // Check whether given a numerical value or bind address
    if (exp != nullptr) { // If given number, set value (pure value variable)
        symbolMap[name].setValue(exp->calculate());
    } else { // If given bind address, set address (local value will update automatically)
        symbolMap[name].setAddress(address);
    }
}

