//
// Created by ben on 12/15/18.
//

#include "Condition.h"


Condition::Condition(std::vector<std::string> args) {
    setCondition(args);
}

Condition::~Condition()
{
    for (Command* command : commands) {
        delete command;
    }
}

void Condition::setCondition(std::vector<std::string> args) {
    condition = args;
}

void Condition::addCommand(Command* command) {
    commands.push_back(command);
}

// TODO (OFEK): Implement expression class
// Check whether the condition expressed is true
bool Condition::conditionTrue() {
//    Expression leftExp(condition[0]);
//    Expression rightExp(condition[2]);
//    double leftValue = leftExp.calculate();
//    double rightValue = rightExp.calculate();
//
//    if (condition[1] == "<") {
//        return (leftValue < rightValue);
//    }
//
//    if (condition[1] == ">") {
//        return (leftValue > rightValue);
//    }
//
//    if (condition[1] == "==") {
//        return (leftValue == rightValue);
//    }
//
//    if (condition[1] == ">=") {
//        return (leftValue >= rightValue);
//    }
//
//    if (condition[1] == "<=") {
//        return (leftValue <= rightValue);
//    }
//
//    // In case no operand was matched, return false
//    return false;
}