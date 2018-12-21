//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_BINARYEXPRESSION_H
#define FLIGHTSIMULATOR_BINARYEXPRESSION_H

#include "Expression.h"

class BinaryExpression : public Expression {
protected:
    Expression *left,*right;
public:
    BinaryExpression(Expression *a, Expression *b);
    virtual double calculate() = 0;

    ~BinaryExpression();
};


#endif //FLIGHTSIMULATOR_BINARYEXPRESSION_H
