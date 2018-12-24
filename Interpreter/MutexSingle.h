//
// Created by ben on 12/24/18.
//

#ifndef FLIGHT_SIMULATOR_MUTEXSINGLE_H
#define FLIGHT_SIMULATOR_MUTEXSINGLE_H

#include <pthread.h>

class MutexSingle {
private:
    static pthread_mutex_t mutex;
public:
    MutexSingle();
    void lock();
    void unlock();
};


#endif //FLIGHT_SIMULATOR_MUTEXSINGLE_H
