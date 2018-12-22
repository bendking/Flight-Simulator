//
// Created by ben on 12/15/18.
//

#ifndef FLIGHTSIMULATOR_CODEROW_H
#define FLIGHTSIMULATOR_CODEROW_H

#include <fstream>
#include <sstream>
#include <vector>
#include <string>

// Class to parse CSV rows
class CodeRow
{
private:
    std::vector<std::string> m_data;
    char delimiter;
    bool normalize;
public:
    CodeRow(char _delimiter = ' ', bool _normalize = true);
    void readNextRow(std::istream& str);
    void readRow(std::stringstream &lineStream);
    int indexOf(std::string param) const;

    std::vector<std::string> getArgs();
    std::vector<std::string> getArgsWithoutLast();
    void removeFirstElement();
    void removeLastElement();
    void removeFirstLetter();
    void removeLastLetter();
    char& lastLetter();

    std::size_t size() const;
    bool isEmpty() const;
    void print() const;

    std::string normalizeLine(std::string line);
    std::string const& operator[](std::size_t index) const {
        return m_data[index];
    }
};

// Read next row
std::istream& operator>>(std::istream &str, CodeRow &data);


#endif //FLIGHTSIMULATOR_CODEROW_H
