//
// Created by ben on 12/18/18.
//

#include "PutVar.h"

/*
 * Expected arguments:
 * 0 = variable name
 * 1 = numerical value OR bind address
 */
void PutVar::execute() {
    // Check whether given a numerical value or bind address
    if (isNumber(arguments[1])) { // If given number, set value (change value in server)
        symbolMap[arguments[0]].setValue(stoi(arguments[1]));
    } else { // If given bind address, set address (local value will update automatically)
        symbolMap[arguments[9]].setAddress(arguments[1]);
    }
}

bool PutVar::isNumber(const std::string &s) const {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}