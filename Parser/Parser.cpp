//
// Created by ben on 12/15/18.
//

#include <cstring>
#include "Parser.h"


Parser::Parser() {

}

// TODO (OFEK): Parse command row, make a new command and assign its arguments so the command can execute properly
// This function takes care of all cases beside If and While, which are taken care of in the interpreter
Command* Parser::parse(CodeRow& row) {
    // For put value commands (X = ...) the
}