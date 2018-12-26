//
// Created by ben on 12/22/18.
//

#ifndef FLIGHT_SIMULATOR_SERVERRUNNER_H
#define FLIGHT_SIMULATOR_SERVERRUNNER_H

#include "ServerBuilder.h"
#include "../Threads/ThreadsVector.h"
#include "../Interpreter/SymbolMap.h"
#include "../Lexer/CodeRow.h"
#include "../Interpreter/MutexSingle.h"
#include <unordered_map>
#include <chrono>
#include <thread>



#define VALUES 23

class ServerRunner {
private:
    Server* server;
    int port;
    int refresh;
    std::unordered_map<std::string, float> valueMap;
    std::string valueNames[VALUES] = {"/instrumentation/airspeed-indicator/indicated-speed-kt",
                                      "/instrumentation/altimeter/indicated-altitude-ft",
                                      "/instrumentation/altimeter/pressure-alt-ft",
                                      "/instrumentation/attitude-indicator/indicated-pitch-deg",
                                      "/instrumentation/attitude-indicator/indicated-roll-deg",
                                      "/instrumentation/attitude-indicator/internal-pitch-deg",
                                      "/instrumentation/attitude-indicator/internal-roll-deg",
                                      "/instrumentation/encoder/indicated-altitude-ft",
                                      "/instrumentation/encoder/pressure-alt-ft",
                                      "/instrumentation/gps/indicated-altitude-ft",
                                      "/instrumentation/gps/indicated-ground-speed-kt",
                                      "/instrumentation/gps/indicated-vertical-speed",
                                      "/instrumentation/heading-indicator/indicated-heading-deg",
                                      "/instrumentation/magnetic-compass/indicated-heading-deg",
                                      "/instrumentation/slip-skid-ball/indicated-slip-skid",
                                      "/instrumentation/turn-indicator/indicated-turn-rate",
                                      "/instrumentation/vertical-speed-indicator/indicated-speed-fpm",
                                      "/controls/flight/aileron",
                                      "/controls/flight/elevator",
                                      "/controls/flight/rudder",
                                      "/controls/flight/flaps",
                                      "/controls/engines/engine/throttle",
                                      "/engines/engine/rpm"};
public:
    ServerRunner(int port, int refresh_rate);
    ~ServerRunner();
    void initializeValues();
    int listen(); // Returns socket
    void run(int new_socket);
    void stop();
};


#endif //FLIGHT_SIMULATOR_SERVERRUNNER_H
