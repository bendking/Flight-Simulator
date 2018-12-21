//client
// Created by ben on 12/19/18.
//

#include "Client.h"

#define PORT 5402
#define ADDR "127.0.0.1"

Client::Client()
{
    sock = -1;
    port = 0;
}

// Connect to a specified address & port
bool Client::connect_to(string address ,int port)
{
    this->address = address;
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

    server.sin_addr.s_addr = inet_addr(address.c_str());
    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    // Attempt connection to remote server
    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0)  {
        perror("Failed to connect");
        return false;
    }
    // Else, connection made
    return true;
}

// Send message to the connect host
bool Client::send_message(string data)
{
    // Send a message
    if (send(sock, data.c_str(), strlen( data.c_str()), 0) < 0) {
        perror("Failed to send message");
        return false;
    }
    // Else
    return true;
}

// Receive data from the connected host
string Client::receive(int size = 512)
{
    char buffer[size];
    string reply;

    // Attempt to receive a reply from the server
    if (recv(sock, buffer, sizeof(buffer), 0) < 0) {
        puts("Failed to receive message (failed recv)");
    }

    reply = buffer;
    return reply;
}

// TODO: DELETE (example)
//int main(int argc , char *argv[])
//{
//    Client c;
//    string host = "127.0.0.1";
//    c.connect_to(host , 5402);
//
//    // send some data
//    c.send_message("set controls/flight/rudder 1\r\n\r\n");
//
//    // receive and echo reply
//    cout<<"----------------------------\n\n";
//    cout<<c.receive(1024);
//    cout<<"\n\n----------------------------\n\n";
//
//    // done
//    return 0;
//}
