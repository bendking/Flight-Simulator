//
// Created by Yaron Israel on 2018-12-20.
//

#include "Division.h"


double Division::calculate() {
    return left->calculate() / right->calculate();
}