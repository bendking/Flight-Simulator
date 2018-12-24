//
// Created by ben on 12/22/18.
//

#include "ClientBuilder.h"


void ClientBuilder::set_client(string ip, int port)
{
    if (!client_set) {
        client = new Client;
        client->connect_to(ip, port);
        client_set = true;
    }
}


Client* ClientBuilder::get_client() {
    if (client_set) {
        return client;
    }
    throw "Client is not set";

}

void ClientBuilder::stop() {
    if (client_set) {
        client->stop();
        delete client;
    }
}