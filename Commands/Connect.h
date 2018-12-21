//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CONNECT_H
#define FLIGHTSIMULATOR_CONNECT_H


#include "Command.h"
#include "Expression.h"
#include <get_client.h>

class Connect: public Command {
std::string ip;
Expression *port;

public:
    Connect(std::string _ip, Expression *_port);
    void execute();
};


#endif //FLIGHTSIMULATOR_CONNECT_H
