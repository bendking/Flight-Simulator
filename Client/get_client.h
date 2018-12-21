#ifndef FLIGHT_SIMULATOR_GET_CLIENT_H
#define FLIGHT_SIMULATOR_GET_CLIENT_H

#include "Client.h"

static Client client;
static bool client_set = false;

void set_client(string ip, int port)
{
    if (!client_set) {
        client = Client();
        client.connect_to("127.0.0.1", 5402);
        client_set = true;
    }
}

Client get_client(string ip, int port)
{
    set_client(ip, port);
    return client;
}

#endif //FLIGHT_SIMULATOR_GET_CLIENT_H
