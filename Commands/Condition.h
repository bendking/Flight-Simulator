//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CONDITION_H
#define FLIGHTSIMULATOR_CONDITION_H

#include "Command.h"
#include "../Expressions/ExpressionLibrary.h"
#include <vector>
#include <string>

class Condition: public Command {
protected:
    std::vector<Command*> commands;
    Expression *leftExp, *rightExp;
    std::string condition;
public:
    Condition(Expression *a, std::string b, Expression *c);
    ~Condition();
    void addCommand(Command* command);

    bool conditionTrue();
    virtual void execute() = 0;
};


#endif //FLIGHTSIMULATOR_CONDITION_H
