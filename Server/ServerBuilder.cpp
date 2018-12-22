//
// Created by ben on 12/22/18.
//

#include "ServerBuilder.h"

ServerBuilder::ServerBuilder() {
    
}

void ServerBuilder::set_server(int port) {
    if (!server_set) {
        server = Server();
        server.bind_to(port);
        server_set = true;
    }
}

Server ServerBuilder::get_server(int port) {
    set_server(port);
    return server;
}