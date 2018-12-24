#include <iostream>
#include <unistd.h>
#include "stdio.h"
#include "Interpreter/Interpreter.h"

//
// Testing tools
//

void printCurrentDirectory()
{
    char buff[FILENAME_MAX];
    getcwd( buff, FILENAME_MAX );
    printf("Current working dir: %s\n", buff);
}

void test_interpreter()
{
    Interpreter interpreter("input");
    interpreter.executeFile();
}

void test_client()
{
    ClientBuilder builder;
    builder.set_client("127.0.0.1", 5402);
    Client client = builder.get_client();
    client.send_message("set /controls/flight/rudder 1\r\n");
}

void test_server()
{
    ServerRunner server(5400, 10);
    int socket = server.listen();
    server.run(socket);
}

//
// Main
//

void start_program(int argc, char *argv[])
{
    // Set default
    char const *file_name = "input";

    // If there is other file name from arguments
    if (argc > 1) {
        file_name = argv[1];
    }

    // Set interpreter
    Interpreter interpreter(file_name);
    interpreter.executeFile();

}

int main(int argc, char *argv[])
{
    // Start
    start_program(argc, argv);
    return 0;
}