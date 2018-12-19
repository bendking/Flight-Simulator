#include <iostream>
#include <unistd.h>
#include "stdio.h"
#include "Interpreter/Interpreter.h"


int main() {
    symbolMap.size();
    Interpreter interpreter("input");
    interpreter.executeFile();
    return 0;
}

void printCurrentDirectory() {
    char buff[FILENAME_MAX];
    getcwd( buff, FILENAME_MAX );
    printf("Current working dir: %s\n", buff);
}