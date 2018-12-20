//
// Created by Yaron Israel on 2018-12-20.
//

#include "Print.h"

Print::Print(std::string _str) {
    str = _str;
}

Print::Print(Expression *_a) {
    a = _a;
}

void Print::execute() {
    if (a != nullptr) {
        //print expression a
    } else {
        //print str
    }
}