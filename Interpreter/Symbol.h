//
// Created by ben on 12/17/18.double value
//

#ifndef FLIGHTSIMULATOR_SYMBOLVALUE_H
#define FLIGHTSIMULATOR_SYMBOLVALUE_H


#include <string>

/*
 * The purpose of this class is to be used in the SymbolMap the interpreter shall hold.
 * Instead of having a Symbol-To-Value map and Symbol-To-Address map, in order to have synchronicity between
 * the existence of a variable and the value it has, this class is necessary.
 */
class Symbol {
private:
    double value;
    std::string address = "";
public:
    explicit Symbol();
    explicit Symbol(double value);
    explicit Symbol(std::string address);
    bool symbolExists(std::string symbol);

    double getValue() const;
    void setValue(double value);
    const std::string &getAddress() const;
    void setAddress(const std::string &address);

    bool addressSet();
    double updateValue();
};


#endif //FLIGHTSIMULATOR_SYMBOLVALUE_H
