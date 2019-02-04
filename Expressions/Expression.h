//
// Created by Yaron Israel on 2018-12-19.
//

#ifndef FLIGHTSIMULATOR_EXPRESSION_H
#define FLIGHTSIMULATOR_EXPRESSION_H


class Expression {

public:
    virtual double calculate() = 0;
    virtual ~Expression() = default;
};


#endif //FLIGHTSIMULATOR_EXPRESSION_H
