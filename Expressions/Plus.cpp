//
// Created by Yaron Israel on 2018-12-19.
//

#include "Plus.h"

double Plus::calculate() {
    return left->calculate() + right->calculate();
}