//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_OPENSERVER_H
#define FLIGHTSIMULATOR_OPENSERVER_H

#include "Command.h"
#include <pthread.h>
#include "../Server/ServerBuilder.h"

class OpenServer: public Command {
private:
    Expression *port, *refreshRate;
public:
    OpenServer(Expression *a, Expression *b);
    ~OpenServer();
    void execute();
};


#endif //FLIGHTSIMULATOR_OPENSERVER_H
