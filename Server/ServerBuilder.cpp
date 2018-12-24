//
// Created by ben on 12/22/18.
//

#include "ServerBuilder.h"


void ServerBuilder::set_server(int port) {
    if (!server_set) {
        server = Server();
        server.bind_to(port);
        server_set = true;
    }
}

Server ServerBuilder::get_server() {
    if (server_set) {
        return server;
    }
}

void ServerBuilder::stop() {
    if (server_set) {
        server.stop();
    }
}