//
// Created by Yaron Israel on 2018-12-20.
//

#ifndef FLIGHT_SIMULATOR_SLEEP_H
#define FLIGHT_SIMULATOR_SLEEP_H


#include "Command.h"
#include "Expression.h"

class Sleep : public Command {
    Expression *a;
public:
    void execute();
};


#endif //FLIGHT_SIMULATOR_SLEEP_H
