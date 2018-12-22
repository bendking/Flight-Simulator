//
// Created by ben on 12/15/18.
//

#include "OpenServer.h"
#include <pthread.h>

struct arg_struct {
    double port;
    double refreshRate;
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
    struct arg_struct* args = (struct arg_struct *)arguments;
    int port = (int) args->port;
    double refreshRate = args->refreshRate;
    free(args);

    // TODO (BEN): Open server
    ServerBuilder builder;
    builder.set_server(port);
    return NULL;
}

/*
 * Expected arguments:
 * 0 = port
 * 1 = refresh rate
 */
void OpenServer::execute()
{
    struct arg_struct *args = (struct arg_struct*) malloc(sizeof(struct arg_struct));
    args->port = port->calculate();
    args->refreshRate = refreshRate->calculate();

    // Create new thread
    pthread_t th;
    pthread_create(&th, NULL, openDataServer, (void *)args);
}
