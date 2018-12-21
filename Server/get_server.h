#ifndef FLIGHT_SIMULATOR_GET_SERVER_H
#define FLIGHT_SIMULATOR_GET_SERVER_H

#include "Server.h"

static Server server;
static bool server_set = false;

void set_server(int port)
{
    if (!server_set) {
        server = Server();
        server.bind_to(port);
        server_set = true;
    }
}

Server get_server(int port)
{
    set_server(port);
    return server;
}

#endif //FLIGHT_SIMULATOR_GET_SERVER_H
