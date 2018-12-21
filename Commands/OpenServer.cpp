//
// Created by ben on 12/15/18.
//

#include "OpenServer.h"

/*
 * Expected arguments:
 * 0 = port
 * 1 = refresh rate
 */
void OpenServer::execute() {
    // TODO (BEN): Open server
}

OpenServer::OpenServer(Expression *a, Expression *b) {
    port = a;
    refreshRate = b;
}