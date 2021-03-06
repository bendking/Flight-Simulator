//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_NUMBER_H
#define FLIGHTSIMULATOR_NUMBER_H

#include "Expression.h"
#include <string>

class Number : public Expression {
private:
    double num;
public:
    explicit Number(double d);
    explicit Number(int i);
    explicit Number(std::string s);
    double calculate();
};


#endif //FLIGHTSIMULATOR_NUMBER_H
