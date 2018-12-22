#include <iostream>
#include <unistd.h>
#include "stdio.h"
#include "Interpreter/Interpreter.h"

void printCurrentDirectory() {
    char buff[FILENAME_MAX];
    getcwd( buff, FILENAME_MAX );
    printf("Current working dir: %s\n", buff);
}

void test_interpreter() {
    Interpreter interpreter("input");
    interpreter.executeFile();
}

void test_client() {
    ClientBuilder builder;
    builder.set_client("127.0.0.1", 5402);
    client.send_message("set controls/flight/rudder -1\r\n");
}

void test_server() {
    ServerRunner server;
    server.run(5400, 10);
}

int main() {
    test_interpreter();
    return 0;
}