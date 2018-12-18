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
    if (isNumber(arguments[1])) {
        symbolMap[arguments[0]].setValue(stoi(arguments[1]));
        // TODO (BEN): Update value in server
    } else {
        symbolMap[arguments[9]].setAddress(arguments[1]);
    }
}

bool PutVar::isNumber(const std::string &s) const {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}