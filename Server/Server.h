//
// Created by ben on 12/19/18.
//

#ifndef FLIGHTSIMULATOR_SERVER_H
#define FLIGHTSIMULATOR_SERVER_H

#include <iostream>	// cout
#include <stdio.h>	// printf
#include <string.h>	// strlen
#include <string>	// string
#include <sys/socket.h>	// socket
#include <arpa/inet.h>	// inet_addr
#include <netdb.h>	// hostent



class Server {
private:
    int sock;
    std::string address;
    int port;
    struct sockaddr_in server;
    // Variables for reading
    char buffer[1024] = {0};
    int read_value;
public:
    Server();
    bool bind_to(int port);
    bool listen_to();
    char* get_buffer();
    int get_read_value();
};


#endif //FLIGHTSIMULATOR_SERVER_H
