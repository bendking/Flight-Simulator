#include "CodeRow.h"

//
// Basic methods
//

void CodeRow::readNextRow(std::istream& str) {
    // Get entire line
    std::string line;
    std::getline(str, line);

    //format the line
    line = normalizeLine(line);

    // Put line in stringstream
    std::stringstream lineStream(line);
    readRow(lineStream);
}

void CodeRow::readRow(std::stringstream &lineStream) {
    std::string cell;

    // Normalize line spacing
    // normalizeLine(lineStream);

    // Clear any previous data and get all elements on this row
    m_data.clear();
    while(std::getline(lineStream, cell, ' ')) {
        m_data.push_back(cell);
    }
}

// Use: infile >> row (will automatically increment input row)
std::istream& operator>>(std::istream &str, CodeRow &data) {
    data.readNextRow(str);
    return str;
}

//
// Helper methods
//

// Size of list
std::size_t CodeRow::size() const {
    return m_data.size();
}

bool CodeRow::isEmpty() const {
    return (m_data.size() == 0);
}

// Index of value in row
int CodeRow::indexOf(std::string param) const {
    for (int i = 0; i < this->size(); i++) {
        if ((*this)[i] == param) {
            return i;
        }
    }

    // If value wasn't found, throw error
    throw std::logic_error("Value doesn't exist in table");
}

// Returns a split of the arguments entered
std::vector<std::string> CodeRow::getArgs() {
    return m_data;
}

// order the line format
std::string CodeRow::normalizeLine(std::string line) {
    std::string normalLine = line;

    //add spaces before and after '='
    int i = 0;
    for(char& c : line) {
        if (c == '=') {
            normalLine.insert(i ," ");
            normalLine.insert(i+2 ," ");
            i+=2;
        }
        i++;
    }
    line = normalLine;

    //remove spaces in expressions
    i = 0;
    for(char& c : line) {

        if (c == '/' || c == '*' || c == '+') {
            while (normalLine[i - 1] == ' ') {
                normalLine.erase(i-1, 1);
                i --;
            }
            while (normalLine[i + 1] == ' ') {
                normalLine.erase(i+1, 1);
                i --;
            }
        }

        if (c == '-') {
            while (normalLine[i - 1] == ' ' && normalLine[i - 2] != '=') {
                normalLine.erase(i-1, 1);
                i --;
            }
            while (normalLine[i + 1] == ' ') {
                normalLine.erase(i+1, 1);
                i --;
            }
        }

        if (c == ')') {
            while (normalLine[i - 1] == ' ') {
                normalLine.erase(i-1, 1);
                i --;
            }
        }
        if (c == '(') {
            while (normalLine[i + 1] == ' ') {
                normalLine.erase(i+1, 1);
                i --;
            }
        }
        i++;
    }

    // Replace every comma with space
    i = 0;
    for(char& c : normalLine) {
        if(c == ',') {
            normalLine.erase(i, 1);
            normalLine.insert(i ," ");
        }

        i++;
    }

    return normalLine;
}
