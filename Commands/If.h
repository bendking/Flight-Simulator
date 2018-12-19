//Condition
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_IF_H
#define FLIGHTSIMULATOR_IF_H


#include "Condition.h"

class If: public Condition {
    // Inherit constructor and destructor from Condition
    using Condition::Condition;
public:
    void execute();
};


#endif //FLIGHTSIMULATOR_IF_H
