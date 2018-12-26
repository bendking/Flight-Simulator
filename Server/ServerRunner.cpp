//
// Created by ben on 12/22/18.
//

#include "ServerRunner.h"


ServerRunner::ServerRunner(int port, int refresh_rate) {
    // Set-up server
    ServerBuilder builder;
    builder.set_server(port);
    // Initialize members
    this->server = builder.get_server();
    this->port = port;
    this->refresh = refresh_rate;
    initializeValues();
}

void ServerRunner::initializeValues ()
{
    valueMap.emplace(std::make_pair("/instrumentation/airspeed-indicator/indicated-speed-kt", 0));
    valueMap.emplace(std::make_pair("/instrumentation/altimeter/indicated-altitude-ft", 0));
    valueMap.emplace(std::make_pair("/instrumentation/altimeter/pressure-alt-ft", 0));
    valueMap.emplace(std::make_pair("/instrumentation/attitude-indicator/indicated-pitch-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/attitude-indicator/indicated-roll-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/attitude-indicator/internal-pitch-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/attitude-indicator/internal-roll-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/encoder/indicated-altitude-ft", 0));
    valueMap.emplace(std::make_pair("/instrumentation/encoder/pressure-alt-ft", 0));
    valueMap.emplace(std::make_pair("/instrumentation/gps/indicated-altitude-ft", 0));
    valueMap.emplace(std::make_pair("/instrumentation/gps/indicated-ground-speed-kt", 0));
    valueMap.emplace(std::make_pair("/instrumentation/gps/indicated-vertical-speed", 0));
    valueMap.emplace(std::make_pair("/instrumentation/heading-indicator/indicated-heading-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/magnetic-compass/indicated-heading-deg", 0));
    valueMap.emplace(std::make_pair("/instrumentation/slip-skid-ball/indicated-slip-skid", 0));
    valueMap.emplace(std::make_pair("/instrumentation/turn-indicator/indicated-turn-rate", 0));
    valueMap.emplace(std::make_pair("/instrumentation/vertical-speed-indicator/indicated-speed-fpm", 0));
    valueMap.emplace(std::make_pair("/controls/flight/aileron", 0));
    valueMap.emplace(std::make_pair("/controls/flight/elevator", 0));
    valueMap.emplace(std::make_pair("/controls/flight/rudder", 0));
    valueMap.emplace(std::make_pair("/controls/flight/flaps", 0));
    valueMap.emplace(std::make_pair("/controls/engines/engine/throttle", 0));
    valueMap.emplace(std::make_pair("/engines/engine/rpm", 0));
}


int ServerRunner::listen() {
    int new_socket = server.listen_to();
    return new_socket;
}

void ServerRunner::run(int new_socket)
{
    // Prepare variables for getting data from server
    std::stringstream stream;
    CodeRow input(',', false);

    // Set interval
    auto interval = std::chrono::nanoseconds(std::chrono::seconds(1)) / refresh;
    while (!shouldStopThreads) {
        // Get current time
        auto start = std::chrono::system_clock::now();

        // Get most recent line from server
        server.read_from(new_socket);
        stream << server.get_buffer();
        stream >> input;
//        input.print();

        // Put values into value map
        for (int i = 0; i < input.size(); i++) {
            valueMap[valueNames[i]] = stof(input[i]);
        }

        // Get mutex & lock
        MutexSingle mutexSingle;
        mutexSingle.lock();

        // Update values
        for (std::pair<std::string, Symbol*> symbol : symbolMap) {
            symbol.second->setValue(valueMap[symbol.first], false);
        }
        g

        // Unlock mutex
        mutexSingle.unlock();

        // Determine thread sleep duration & sleep
        auto end = std::chrono::system_clock::now();
        auto delay = end - start;
        auto sleep_duration = interval - delay;
        std::this_thread::sleep_for(sleep_duration);
    }
}

void ServerRunner::stop() {
    server.stop();
}
