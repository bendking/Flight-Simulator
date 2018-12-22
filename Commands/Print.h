//
// Created by Yaron Israel on 2018-12-20.
//

#ifndef FLIGHT_SIMULATOR_PRINT_H
#define FLIGHT_SIMULATOR_PRINT_H

#include "Command.h"

class Print : public Command {
    Expression *a = nullptr;
    std::string str;
public:
    explicit Print(std::string _str);
    explicit Print(Expression *_a);
    void execute();

    ~Print();
};


#endif //FLIGHT_SIMULATOR_PRINT_H
