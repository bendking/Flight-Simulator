//
// Created by ben on 12/15/18.
//

#include "DefineVar.h"


DefineVar::DefineVar(std::string _name, Expression *_exp) {
    exp = _exp;
    name = _name;
}
DefineVar::DefineVar(std::string _name, std::string _address) {
    address = _address;
    name = _name;
}
/*
 * Expected arguments:
 * 0 = variable name
 * 1 = numerical value OR bind address
 * Note - it is given that the same variable won't be declared twice
 */
void DefineVar::execute() {
    // Insert new variable to Symbol Map
    symbolMap.emplace(std::make_pair(name, Symbol()));
    // Check whether given a numerical value or bind address
    if (exp != nullptr) { // If given number, set value (pure value variable)
        symbolMap[name].setValue(exp->calculate());
    } else { // If given bind address, set address (local value will update automatically)
        symbolMap[name].setAddress(address);
    }
}


/*
// Check if a given string is a number
bool DefineVar::isNumber(const std::string &s) const {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
 */