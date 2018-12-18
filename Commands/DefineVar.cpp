//
// Created by ben on 12/15/18.
//

#include "DefineVar.h"

/*
 * Expected arguments:
 * 0 = variable name
 * 1 = numerical value OR bind address
 * Note - it is given that the same variable won't be declared twice
 */
void DefineVar::execute() {
    // Insert new variable to Symbol Map
    symbolMap.emplace(std::make_pair(arguments[0], Symbol()));
    // Check whether given a numerical value or bind address
    if (isNumber(arguments[1])) {
        symbolMap[arguments[0]].setValue(stoi(arguments[1]));
    } else {
        symbolMap[arguments[9]].setAddress(arguments[1]);
    }
}

bool DefineVar::isNumber(const std::string &s) const {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}