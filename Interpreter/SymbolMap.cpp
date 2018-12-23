//
// Created by ben on 12/19/18.
//

#include "SymbolMap.h"

std::unordered_map<std::string, Symbol*> symbolMap;
bool symbolExists(std::string symbol) {
    return (symbolMap.count(symbol) > 0);
}