//
// Created by Yaron Israel on 2018-12-20.
//

#include "Multiply.h"

double Multiply::calculate() {
    return left->calculate() * right->calculate();
}