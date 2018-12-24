//
// Created by ben on 12/17/18.double value
//

#ifndef FLIGHTSIMULATOR_SYMBOLVALUE_H
#define FLIGHTSIMULATOR_SYMBOLVALUE_H

#include <string>
#include "../Client/ClientBuilder.h"


/*
 * The purpose of this class is to be used in the SymbolMap the interpreter shall hold.
 * Instead of having a Symbol-To-Value map and Symbol-To-Address map, in order to have synchronicity between
 * the existence of a variable and the value it has, this class is necessary.
 */
class Symbol {
private:
    double value = 0;
    std::string path = "";
public:
    explicit Symbol();
    explicit Symbol(double value);
    explicit Symbol(std::string address);

    double getValue() const;
    void setValue(double value, bool notifyServer);
    const std::string &getPath() const;
    void setPath(const std::string &address);

    bool pathSet();
};


#endif //FLIGHTSIMULATOR_SYMBOLVALUE_H
