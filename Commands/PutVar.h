//
// Created by ben on 12/18/18.
//

#ifndef FLIGHTSIMULATOR_PUTVAR_H
#define FLIGHTSIMULATOR_PUTVAR_H

#include "Command.h"

class PutVar : public Command {
public:
    void execute();
    bool isNumber(const std::string &s) const;
};


#endif //FLIGHTSIMULATOR_PUTVAR_H
