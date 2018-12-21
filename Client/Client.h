#ifndef FLIGHTSIMULATOR_CLIENT_H
#define FLIGHTSIMULATOR_CLIENT_H

#include <iostream>	// cout
#include <stdio.h>	// printf
#include <string.h>	// strlen
#include <string>	// string
#include <sys/socket.h>	// socket
#include <arpa/inet.h>	// inet_addr
#include <netdb.h>	// hostent

using namespace std;

class Client {
private:
    int sock;
    std::string address;
    int port;
    struct sockaddr_in server;
public:
    Client();
    bool connect_to(string address, int port);
    bool send_message(string data);
    string receive(int);
};




#endif //FLIGHTSIMULATOR_CLIENT_H
