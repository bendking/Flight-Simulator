//
// Created by Yaron Israel on 2018-12-19.
//

#include "Number.h"


Number::Number(int i) {
    num = (double) i;
}


Number::Number(double d) {
    num = d;
}

Number::Number(std::string s) {
    num = std::stod(s);
}

double Number::calculate() {
    return num;
}