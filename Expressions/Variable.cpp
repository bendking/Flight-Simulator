//
// Created by Yaron Israel on 2018-12-19.
//

#include "Variable.h"


Variable::Variable(std::string _name) {
    name = _name;
}

double Variable:: calculate()
{
    if (symbolExists(name)) {
        return symbolMap.at(name).getValue();
    }
    else {
        throw "Variable doesn't exist";
    }

}