//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_PLUS_H
#define FLIGHTSIMULATOR_PLUS_H

#include "BinaryExpression.h"
class Plus : public BinaryExpression{
    using BinaryExpression:: BinaryExpression;
public:
    double calculate();
};


#endif //FLIGHTSIMULATOR_PLUS_H
