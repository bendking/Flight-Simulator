//
// Created by Yaron Israel on 2018-12-20.
//

#include "UnaryMinus.h"


UnaryMinus::UnaryMinus(Expression *_exp) {
   exp = _exp;
}
double UnaryMinus::calculate() {
    return  -1 * exp->calculate();
}