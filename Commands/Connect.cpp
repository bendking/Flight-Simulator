//
// Created by ben on 12/15/18.
//

#include "Connect.h"


Connect::Connect(std::string _ip, Expression *_port) {
    ip = _ip;
    port = _port;
}

Connect::~Connect() {
    delete port;
}

/*
 * Expected arguments:
 * 0 = IP
 * 1 = port
 */
void Connect::execute() {
    // TODO (BEN): Connect to server
}


