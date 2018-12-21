#include <iostream>
#include <unistd.h>
#include "stdio.h"
#include "Interpreter/Interpreter.h"
#include "Client/Client.h"

int main() {
    Client client = Client();
    client.connect_to("127.0.0.1", 5402);
    client.send_message("set controls/flight/rudder 1");
//    Interpreter interpreter("input");
//    interpreter.executeFile();
    return 0;
}

void printCurrentDirectory() {
    char buff[FILENAME_MAX];
    getcwd( buff, FILENAME_MAX );
    printf("Current working dir: %s\n", buff);
}