//
// Created by ben on 12/19/18.
//

#include <unistd.h>
#include "Server.h"

#define PORT 5400

Server::Server() {
    sock = -1;
    port = 0;
}

bool Server::bind_to(int port) {
    this->port = port;
    // Attempt socket creation if it is not already created
    if (sock == -1) {
        // Create socket
        sock = socket(AF_INET , SOCK_STREAM , 0);
        if (sock == -1) {
            perror("Failed to create socket");
            return false;
        }
    }

    // Forcefully attaching socket to the port 8080
    int opt = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        return false;
    }

    server.sin_addr.s_addr = inet_addr(address.c_str());
    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    if ((bind(sock, (struct sockaddr *)&server, sizeof(address))) < 0) {
        perror("Failed to bind server");
        return false;
    }
    // Else, binding succeeded
    return true;
}

bool Server::listen_to() {
    // Attempt to listen
    if (listen(sock, 3) < 0) {
        perror("listen");
        return false;
    }

    int addrlen = sizeof(address);
    int new_socket;
    // Attempt to accept new client
    if ((new_socket = accept(sock, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
        perror("accept");
        return false;
    }

    // Read from client
    read_value = read(new_socket, buffer, 1024);
    // TODO (BEN): Do something with buffer
}