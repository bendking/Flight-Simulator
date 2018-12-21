//
// Created by Yaron Israel on 2018-12-20.
//

#ifndef FLIGHT_SIMULATOR_UNARYMINUS_H
#define FLIGHT_SIMULATOR_UNARYMINUS_H

#include "Expression.h"

class UnaryMinus : public Expression {
private:
    Expression *exp;
public:

    UnaryMinus(Expression *_exp);

    double calculate();

    ~UnaryMinus();

};


#endif //FLIGHT_SIMULATOR_UNARYMINUS_H
