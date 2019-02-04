//
// Created by ben on 12/22/18.
//

#include "ServerBuilder.h"


void ServerBuilder::set_server(int port)
{
    if (!server_set) {
        server = new Server();
        server->bind_to(port);
        server_set = true;
    }
}

Server* ServerBuilder::get_server()
{
    if (server_set) {
        return server;
    }
    throw "Server is not set";
}

void ServerBuilder::stop()
{
    if (server_set) {
        server->stop();
    }
}