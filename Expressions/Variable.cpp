//
// Created by Yaron Israel on 2018-12-19.
//

#include "Variable.h"
#include "../Interpreter/SymbolMap.h"
#include "../Interpreter/Symbol.h"
Variable::Variable(std::string _name) {
    name = _name;
}
double Variable:: calculate() {
    try {
        Symbol symbol = symbolMap.at(name);
        return symbol.getValue();
    } catch (...) {
        //no symbol in this name
        throw "no symbol in this name";
    }
}