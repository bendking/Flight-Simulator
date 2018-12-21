//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CONNECT_H
#define FLIGHTSIMULATOR_CONNECT_H

#include "Command.h"
#include "Expression.h"
#include "SymbolMap.h"

class Connect: public Command {
std::string ip;
Expression *port;

public:
    Connect(std::string _ip, Expression *_port);
    void execute();
    ~Connect();
};


#endif //FLIGHTSIMULATOR_CONNECT_H
