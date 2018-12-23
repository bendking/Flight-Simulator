//
// Created by ben on 12/18/18.
//

#ifndef FLIGHTSIMULATOR_PUTVAR_H
#define FLIGHTSIMULATOR_PUTVAR_H

#include "Command.h"
#include "../Interpreter/SymbolMap.h"


class PutVar : public Command {
private:
    Expression *exp = nullptr;
    std::string address = "";
    std::string name = "";
    std::string var = "";
public:
    PutVar(std::string _name, std::string _address);
    PutVar(std::string _name, Expression * _exp);
    PutVar(std::string _name, std::string _var, bool bind);

    void execute();

    ~PutVar();
};


#endif //FLIGHTSIMULATOR_PUTVAR_H
