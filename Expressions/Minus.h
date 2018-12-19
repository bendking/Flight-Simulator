//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_MINUS_H
#define FLIGHTSIMULATOR_MINUS_H

#include "BinaryExpression.h"

class Minus : public BinaryExpression {
    using BinaryExpression:: BinaryExpression;

public:
    double calculate();
};


#endif //FLIGHTSIMULATOR_MINUS_H
