#include "CodeRow.h"

//
// Basic methods
//

void CodeRow::readNextRow(std::istream& str) {
    // Get entire line
    std::string line;
    std::getline(str, line);

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