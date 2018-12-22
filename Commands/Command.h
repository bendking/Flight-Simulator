#ifndef FLIGHTSIMULATOR_COMMAND_H
#define FLIGHTSIMULATOR_COMMAND_H

#include <vector>
#include <string>
#include "../Expressions/Expression.h"

class Command {

public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

#endif //FLIGHTSIMULATOR_COMMAND_H
