//
// Created by ben on 12/19/18.
//

#include "Client.h"

#define PORT 8080
#define ADDR "127.0.0.1"

Client::Client() {
    int server_fd, new_socket, valread;
    struct sockaddr_in address;

    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *hello = "Hello from server";

    // Creating socket file descriptor
    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_aton(ADDR);
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    connect(server_fd, (struct sockaddr *)&address,
            sizeof(address));


    listen(server_fd, 5);

    // accepting a client
    new_socket = accept(server_fd, (struct sockaddr *)&address,
                        (socklen_t*)&addrlen);

    valread = read( new_socket , buffer, 1024);
    printf("%s\n",buffer );
    send(new_socket , hello , strlen(hello) , 0 );
    printf("Hello message sent\n");
}