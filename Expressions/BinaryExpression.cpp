//
// Created by Yaron Israel on 2018-12-19.
//

#include "BinaryExpression.h"


BinaryExpression::BinaryExpression(Expression *a, Expression *b) {
    left = a;
    right = b;
}

BinaryExpression::~BinaryExpression() {
    delete left;
    delete right;
}