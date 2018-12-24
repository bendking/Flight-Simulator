//
// Created by ben on 12/24/18.
//

#ifndef FLIGHT_SIMULATOR_MUTEXSINGLE_H
#define FLIGHT_SIMULATOR_MUTEXSINGLE_H

#include <pthread.h>

static pthread_mutex_t* mutex;

class MutexSingle {
public:
    MutexSingle();
    void lock();
    void unlock();
    void destroy();
};


#endif //FLIGHT_SIMULATOR_MUTEXSINGLE_H
