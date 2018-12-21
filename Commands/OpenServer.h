//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_OPENSERVER_H
#define FLIGHTSIMULATOR_OPENSERVER_H

#include "Command.h"
#include "Expression.h"

class OpenServer: public Command {
private:
    Expression *port, *refreshRate;
public:
    OpenServer(Expression *a, Expression *b);

    void execute();

    ~OpenServer();
};


#endif //FLIGHTSIMULATOR_OPENSERVER_H
