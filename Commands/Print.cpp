#include "Print.h"
#include <iostream>

Print::Print(std::string _str) {
    str = _str;
}

Print::Print(Expression *_a) {
    a = _a;
}
Print::~Print() {
    if (a != nullptr) {
        delete a;
    }
}
// TODO (OFEK)
void Print::execute()
{
    if (a != nullptr) {
        // print expression a
        std::cout << a->calculate();
    } else {
        // print str
        str.erase(0, 1);
        str.erase(str.size() - 1, 1);
        std::cout << str;
    }
}