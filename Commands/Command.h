#ifndef FLIGHTSIMULATOR_COMMAND_H
#define FLIGHTSIMULATOR_COMMAND_H

#include "../Interpreter/SymbolMap.h"
#include <vector>
#include <string>

class Command {

public:
    virtual void execute() = 0;

    virtual ~Command() = default;
};

#endif //FLIGHTSIMULATOR_COMMAND_H
