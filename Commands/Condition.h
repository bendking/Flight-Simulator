//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CONDITION_H
#define FLIGHTSIMULATOR_CONDITION_H

#include "Command.h"
#include <vector>
#include <string>

class Condition: public Command {
protected:
    std::vector<Command*> commands;
    std::vector<std::string> condition;
public:
    Condition(std::vector<std::string> args);
    ~Condition();
    void setCondition(std::vector<std::string> args);
    void addCommand(Command* command);

    bool conditionTrue();
    virtual void execute() = 0;
};


#endif //FLIGHTSIMULATOR_CONDITION_H
