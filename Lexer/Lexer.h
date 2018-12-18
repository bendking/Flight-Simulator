//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_LEXER_H
#define FLIGHTSIMULATOR_LEXER_H

#include "CodeRow.h"

class Lexer {
private:
    CodeRow row;
    std::ifstream* file = nullptr;
public:
    Lexer();
    Lexer(std::string fileName);
    bool setFile(std::string fileName);
    bool fileSet();

    ~Lexer();
    CodeRow& nextRow();
    CodeRow& lexLine(std::string line);
    std::vector<std::string> getArgs();
};

#endif //FLIGHTSIMULATOR_LEXER_H
