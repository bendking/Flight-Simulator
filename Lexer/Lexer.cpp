//
// Created by ben on 12/15/18.
//

#include <iostream>
#include "Lexer.h"

//
// Basic methods
//

// Default lexer
Lexer::Lexer() {
    row = CodeRow();
}

// File lexer
Lexer::Lexer(std::string fileName) {
    row = CodeRow();
    if (!setFile(fileName)) {
        throw std::logic_error("File doesn't exist");
    }
}

// Set file to Lexer
// Returns whether succeeded
bool Lexer::setFile(std::string fileName) {
    file = new std::ifstream(fileName);
    return file->good();
}

bool Lexer::fileSet() {
    return (file != nullptr);
}

// Destructor
Lexer::~Lexer() {
    if (file != nullptr) {
        delete file;
    }
}

//
// Usage methods
//

// Returns next row, returns NULL if reached EOF
CodeRow& Lexer::nextRow() {
    // Check if a file has been set
    if (!fileSet()) {
        throw std::logic_error("No file to read from");
    }

    // Put next line into row
    // Puts empty row in case of empty line
    *file >> row;
    return row;
}

// Lex one line (command line style)
CodeRow& Lexer::lexLine(std::string line) {
    // Convert line to stringstream
    std::stringstream lineStream(line);
    // Process line into CodeRow
    row.readRow(lineStream);
    // Return row
    return row;
}

// Returns a split of the arguments entered
std::vector<std::string> Lexer::getArgs() {
    return row.getArgs();
}