//
// Created by ben on 12/15/18.
//

#include "Condition.h"


Condition::Condition(Expression *a, std::string b, Expression *c) {
    leftExp = a;
    condition = b;
    rightExp = c;
}

Condition::~Condition()
{
    for (Command* command : commands) {
        delete command;
    }

    delete leftExp;
    delete rightExp;
}


void Condition::addCommand(Command* command) {
    commands.push_back(command);
}

// Check whether the condition expressed is true
bool Condition::conditionTrue() {

    double leftValue = leftExp->calculate();
    double rightValue = rightExp->calculate();

    if (condition == "<") {
        return (leftValue < rightValue);
    }

    if (condition == ">") {
        return (leftValue > rightValue);
    }

    if (condition == "==") {
        return (leftValue == rightValue);
    }

    if (condition == ">=") {
        return (leftValue >= rightValue);
    }

    if (condition == "<=") {
        return (leftValue <= rightValue);
    }

    // In case no operand was matched, return false
    return false;
}