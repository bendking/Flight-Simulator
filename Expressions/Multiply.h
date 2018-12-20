//
// Created by Yaron Israel on 2018-12-20.
//

#ifndef FLIGHT_SIMULATOR_MULTIPLY_H
#define FLIGHT_SIMULATOR_MULTIPLY_H


#include "BinaryExpression.h"

class Multiply : public BinaryExpression {
    using BinaryExpression:: BinaryExpression;

public:
    double calculate();
};


#endif //FLIGHT_SIMULATOR_MULTIPLY_H
