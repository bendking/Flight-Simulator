//
// Created by Yaron Israel on 2018-12-19.
//

#include "Minus.h"


double Minus::calculate() {
    return left->calculate() - right->calculate();
}