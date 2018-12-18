//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CONNECT_H
#define FLIGHTSIMULATOR_CONNECT_H


#include "Command.h"

class Connect: public Command {
public:
    Connect();
    void execute();
};


#endif //FLIGHTSIMULATOR_CONNECT_H
