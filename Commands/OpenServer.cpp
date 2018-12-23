//
// Created by ben on 12/15/18.
//

#include "OpenServer.h"

struct arg_struct {
    ServerRunner* server;
    int new_socket;
};

OpenServer::OpenServer(Expression *a, Expression *b)
{
    port = a;
    refreshRate = b;
}

OpenServer::~OpenServer() {
    delete port;
    delete refreshRate;
}

void* openDataServer(void *arguments)
{
    // Open data server
    auto args = (struct arg_struct*) arguments;
    ServerRunner* server = args->server;
    int new_socket = args->new_socket;

    // Free struct
    free(args);

    // Run it
    server->run(new_socket);

    // Free server
    delete server;
}

/*
 * Expected arguments:
 * 0 = port
 * 1 = refresh rate
 */
void OpenServer::execute()
{
    // Make struct to hold arguements for thread
    auto args = (struct arg_struct*) malloc(sizeof(struct arg_struct));
    // Get server related parameters
    int _port = port->calculate();
    int _refreshRate = refreshRate->calculate();

    // Make Server Runner
    ServerRunner *server = new ServerRunner(_port, _refreshRate);
    // Wait for connection (simulator)
    int new_socket = server->listen();

    // Declare arguements to be sent for thread
    args->server = server;
    args->new_socket = new_socket;
    // Create new thread
    pthread_t th;
    pthread_create(&th, NULL, openDataServer, args);
}
