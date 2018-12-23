//
// Created by Yaron Israel on 2018-12-20.
//

#include "Sleep.h"
#include <unistd.h>
#include <thread>

Sleep::Sleep(Expression *_a) {
    a = _a;
}

void Sleep::execute() {
    // Sleep amount specified
    std::this_thread::sleep_for(std::chrono::milliseconds((int) a->calculate()));
}

Sleep::~Sleep() {
    delete a;
}