//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_OPENSERVER_H
#define FLIGHTSIMULATOR_OPENSERVER_H

#include "Command.h"
#include "Expression.h";

class OpenServer: public Command {
private:
    Expression *a, *b;
public:
    void execute();
};


#endif //FLIGHTSIMULATOR_OPENSERVER_H
