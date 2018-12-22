#include "CodeRow.h"

//
// Basic methods
//

void CodeRow::readNextRow(std::istream& str)
{
    // Get entire line
    std::string line;
    std::getline(str, line);

    //format the line
    line = normalizeLine(line);

    // Put line in stringstream
    std::stringstream lineStream(line);
    readRow(lineStream);
}

void CodeRow::readRow(std::stringstream &lineStream)
{
    std::string cell;

    // Normalize line spacing
    // normalizeLine(lineStream);

    // Clear any previous data and get all elements on this row
    m_data.clear();
    while(std::getline(lineStream, cell, ' ')) {
        if (cell != " " && cell != "") {
            m_data.push_back(cell);
        }
    }
}

// Use: infile >> row (will automatically increment input row)
std::istream& operator>>(std::istream &str, CodeRow &data)
{
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

void CodeRow::removeFirstElement()
{
    std::vector<std::string> new_data(m_data.begin() + 1, m_data.end());
    m_data = new_data;
}

void CodeRow::removeLastElement() {
    m_data.pop_back();
}

void CodeRow::removeFirstLetter()
{
    // If the first letter is an element of its own
    if (m_data.front().size() == 1) {
        removeFirstElement();
    } else {
        // Remove first letter of first element
        m_data[0] = m_data[0].substr(1);
    }
}

void CodeRow::removeLastLetter()
{
    // If the last letter is an element of its own
    if (m_data.back().size() == 1) {
        removeLastElement();
    } else {
        // Remove first letter of first element
        m_data[0] = m_data[0].substr(0, m_data[0].size()-1);
    }
}

char& CodeRow::lastLetter() {
    return m_data.back().back();
}

// Index of value in row
int CodeRow::indexOf(std::string param) const
{
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

std::vector<std::string> CodeRow::getArgsWithoutLast()
{
    std::vector<std::string> returnVector = m_data;
    returnVector.pop_back(); // Remove last argument
    return returnVector;

}

// Normalize the line format
// TODO add spaces near < > == ||
std::string CodeRow::normalizeLine(std::string line)
{

    std::string normalLine = line;

    // Add spaces before and after these tokens: =, ==, <, >, <=, >=
    for (int i = 0; i < normalLine.size(); i++) {
        if (normalLine[i] == '=' || normalLine[i] == '<' || normalLine[i] == '>' ) {
            if (normalLine[i-1] == '!' || normalLine[i-1] == '=' || normalLine[i-1] == '<' || normalLine[i-1] == '>') {
                normalLine.insert(i-1, " ");
            } else {
                normalLine.insert(i, " ");
            }
            i++;

            if (normalLine[i+1] == '=') {
                normalLine.insert(i+2 ," ");
            } else {
                normalLine.insert(i+1 ," ");
            }
            i++;
        }
    }


    // Normalize new line
    line = normalLine;


    // Remove spaces in expressions
    for (int i = 0; i < normalLine.size(); i++) {
        // Remove spaces before and after
        if (normalLine[i] == '/' || normalLine[i] == '*' || normalLine[i] == '+' || normalLine[i] == '-') {
            // while there are no spaces
            while (normalLine[i - 1] == ' ' && normalLine[i - 2] != '=') {
                normalLine.erase(i-1, 1);
                i --;
            }
            while (normalLine[i + 1] == ' ') {
                normalLine.erase(i+1, 1);
                i --;
            }

        }
        // Check for close closer
        else if (normalLine[i] == ')') {
            while (normalLine[i - 1] == ' ') {
                normalLine.erase(i-1, 1);
                i --;
            }
        }
        // Check for open closer
        else if (normalLine[i] == '(') {
            while (normalLine[i + 1] == ' ') {
                normalLine.erase(i+1, 1);
                i --;
            }
        }
    }

    // Replace every comma with space
    int i = 0;
    for(char& c : normalLine) {
        if(c == ',') {
            normalLine.erase(i, 1);
            normalLine.insert(i ," ");
        }
        // Move to next character
        i++;
    }
    // Finally, return normalized line
    return normalLine;
}
