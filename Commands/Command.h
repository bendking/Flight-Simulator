#ifndef FLIGHTSIMULATOR_COMMAND_H
#define FLIGHTSIMULATOR_COMMAND_H

#include "../Interpreter/SymbolMap.h"
#include <vector>
#include <string>

class Command {
protected:
    std::vector<std::string> arguments;
public:
    virtual void execute() = 0;
    void setArguments(std::vector<std::string> _arguments) {
        arguments = _arguments;
    }
};

#endif //FLIGHTSIMULATOR_COMMAND_H
