//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_WHILE_H
#define FLIGHTSIMULATOR_WHILE_H


#include "Condition.h"

class While: public Condition {
    using Condition::Condition; // Inherit constructor from Condition
public:
    void execute();
};


#endif //FLIGHTSIMULATOR_WHILE_H
