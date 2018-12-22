//
// Created by ben on 12/22/18.
//

#ifndef FLIGHT_SIMULATOR_GET_CLIENT_H
#define FLIGHT_SIMULATOR_GET_CLIENT_H


#include "Client.h"

static Client client;
static bool client_set = false;

class ClientBuilder {
public:
    ClientBuilder();
    void set_client(string ip, int port);
    Client get_client(string ip, int port);
};


#endif //FLIGHT_SIMULATOR_GET_CLIENT_H
