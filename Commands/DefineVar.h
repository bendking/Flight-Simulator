//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_DEFINEVAR_H
#define FLIGHTSIMULATOR_DEFINEVAR_H

#include "Command.h"
#include "../Interpreter/SymbolMap.h"


class DefineVar: public Command {
public:
    DefineVar();
    void execute();
    bool isNumber(const std::string& s) const;
};


#endif//FLIGHTSIMULATOR_DEFINEVAR_H
