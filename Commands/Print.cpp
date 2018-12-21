#include "Print.h"

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
    } else {
        // print str
    }
}