//
// Created by ben on 12/17/18.
//

#include "Symbol.h"

Symbol::Symbol() {
    // Empty symbol
}

Symbol::Symbol(double value) {
    Symbol::value = value;
}

Symbol::Symbol(std::string address) {
    Symbol::address = address;
    updateValue();
}

double Symbol::getValue() const {
    return value;
}

void Symbol::setValue(double value) {
    Symbol::value = value;
    if (addressSet()) {
        // TODO (BEN): Update value in server
    }
}

const std::string &Symbol::getAddress() const {
    return address;
}

void Symbol::setAddress(const std::string &address) {
    Symbol::address = address;
    // May be necessary to updateValue(), for now we will let the refresh rate do this
}

bool Symbol::addressSet() {
    return !(address == "");
}

// TODO (BEN): Figure out getting value from simulation as client and implement
double Symbol::updateValue() {
    // Update value through bound address
}