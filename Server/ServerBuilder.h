//
// Created by ben on 12/22/18.
//

#ifndef FLIGHT_SIMULATOR_GET_SERVER_H
#define FLIGHT_SIMULATOR_GET_SERVER_H

#include "Server.h"

static Server server;
static bool server_set = false;

class ServerBuilder {
public:
    void set_server(int port);
    Server get_server();
    void stop();
};


#endif //FLIGHT_SIMULATOR_GET_SERVER_H
