#ifndef FLIGHT_SIMULATOR_GET_SERVER_H
#define FLIGHT_SIMULATOR_GET_SERVER_H

#include "Server.h"

static Server server;
static bool server_set = false;

void set_server()
{
    if (!server_set) {
        server = Server();
        server.bind_to(5400);
        server_set = true;
    }
}

Server get_server()
{
    set_server();
    return server;
}

#endif //FLIGHT_SIMULATOR_GET_SERVER_H
