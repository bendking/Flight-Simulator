//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_OPENSERVER_H
#define FLIGHTSIMULATOR_OPENSERVER_H

#include "Command.h"
#include <pthread.h>
#include "../Server/ServerRunner.h"
#include "../Server/ServerBuilder.h"
#include "../Threads/ThreadManager.h"


class OpenServer: public Command {
private:
    Expression *port, *refreshRate;
    ThreadManager *threadManager;
public:
    OpenServer(Expression *a, Expression *b, ThreadManager *_threadManager);
    ~OpenServer();
    void execute();
};


#endif //FLIGHTSIMULATOR_OPENSERVER_H
