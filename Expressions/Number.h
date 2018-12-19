//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_NUMBER_H
#define FLIGHTSIMULATOR_NUMBER_H

#include "Expression.h"

class Number : public Expression {
double num;
public:
    Number(double d);
    Number(int i);

    double calculate();
};


#endif //FLIGHTSIMULATOR_NUMBER_H
