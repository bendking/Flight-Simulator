#include "Print.h"
#include <iostream>

Print::Print(std::vector<std::string> v) {
    toPrint = v;
}

Print::Print(Expression *_a) {
    a = _a;
}
Print::~Print()
{
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

        int length = toPrint.size();
        for(int i=1; i<length; ++i) {
            std::string str = toPrint[i];

            if (i == 1) {
                str.erase(0, 1);
            }
            //if it's the last don't print space
            if (i==length-1) {
                str.erase(str.size() - 1, 1);
                std::cout << str;
            } else {
                std::cout << str << ' ';
            }


        }

    }
}