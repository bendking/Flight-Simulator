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
    Client* client = builder.get_client();
    client->send_message("set /controls/engines/engine/throttle 1\r\n");
    client->send_message("set /controls/flight/rudder 1\r\n");
    client->send_message("set /controls/flight/elevator 1\r\n");

}

void test_server() {
    ServerRunner server(5400, 10);
    int socket = server.listen();
    server.run(socket);
}

int main() {
    test_interpreter();
    return 0;
}