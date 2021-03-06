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
    ServerRunner* runner = args->server;
    int new_socket = args->new_socket;

    // Run server & stop when told by main
    runner->run(new_socket);
    runner->stop();

    // Free server & struct
    delete runner;
    free(args);
    
    return nullptr;
}

/*
 * Expected arguments:
 * 0 = port
 * 1 = refresh rate
 */
void OpenServer::execute()
{
    // Make struct to hold arguments for thread
    auto args = new arg_struct;
    int _port = (int) port->calculate();
    int _refreshRate = (int) refreshRate->calculate();

    // Make Server Runner & wait for connection
    ServerRunner *server = new ServerRunner(_port, _refreshRate);
    int new_socket = server->listen();

    // Declare arguments to be sent for thread
    args->server = server;
    args->new_socket = new_socket;

    // Create new thread
    pthread_t *th = new pthread_t;
    threadsVector.push_back(th);
    pthread_create(th, nullptr, openDataServer, args);
}
