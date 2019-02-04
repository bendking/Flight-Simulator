//
// Created by ben on 12/18/18.
//

#ifndef FLIGHTSIMULATOR_SYMBOLMAP_H
#define FLIGHTSIMULATOR_SYMBOLMAP_H

#include <unordered_map>
#include "Symbol.h"

using namespace std;

// Global variable - the symbol hashmap
extern unordered_map<std::string, Symbol*> symbolMap;
// Check if symbol exists in Symbol Map
bool symbolExists(std::string symbol);



#endif //FLIGHTSIMULATOR_SYMBOLMAP_H
