//
// Created by ben on 12/15/18.
//

#include "OpenServer.h"

struct arg_struct {
    ServerRunner* server;
    int new_socket;
    int port;
    int refreshRate;
    ThreadManager* threadManager;
};

OpenServer::OpenServer(Expression *a, Expression *b, ThreadManager *_threadManager)
{
    port = a;
    refreshRate = b;
    threadManager = _threadManager;
}

OpenServer::~OpenServer()
{
    delete port;
    delete refreshRate;
}

void* openDataServer(void *arguments)
{
    // Open data server
    auto args = (struct arg_struct*) arguments;
    ServerRunner* server = args->server;

    // Free struct
    free(args);

    // Run it
    server->run(args->new_socket, args->port, args->refreshRate, args->threadManager);

    // Free server
    delete server;

    pthread_exit(nullptr);
}

/*
 * Expected arguments:
 * 0 = port
 * 1 = refresh rate
 */
void OpenServer::execute()
{
    // Make struct to hold arguments for thread
    auto args = (struct arg_struct*) malloc(sizeof(struct arg_struct));
    // Get server related parameters
    int _port = (int) port->calculate();
    int _refreshRate = (int) refreshRate->calculate();

    // Make Server Runner
    ServerRunner *server = new ServerRunner(_port, _refreshRate);
    // Wait for connection (simulator)
    int new_socket = server->listen();

    // Declare arguments to be sent for thread
    args->server = server;
    args->new_socket = new_socket;
    args->threadManager = threadManager;
    args->port = _port;
    args->refreshRate = _refreshRate;
    // Create new thread
    pthread_create(threadManager->getThread(), nullptr, openDataServer, args);
}
