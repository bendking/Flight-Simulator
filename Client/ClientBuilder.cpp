//
// Created by ben on 12/22/18.
//

#include "ClientBuilder.h"

void ClientBuilder::set_client(string ip, int port)
{
    if (!client_set) {
        client = Client();
        client.connect_to(ip, port);
        client_set = true;
    }
}


Client ClientBuilder::get_client(string ip, int port)
{
    set_client(ip, port);
    return client;
}