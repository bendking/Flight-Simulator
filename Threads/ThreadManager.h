//
// Created by Yaron Israel on 2018-12-23.
//

#ifndef FLIGHT_SIMULATOR_THREADMANAGER_H
#define FLIGHT_SIMULATOR_THREADMANAGER_H

#include <pthread.h>

class ThreadManager {
private:
    bool exitThread = false;
    pthread_t* th;
public:
    ThreadManager();
    ~ThreadManager();

    bool shouldStopThread();
    void toggleExitThread();

    void finish();

    pthread_t* getThread();
};


#endif //FLIGHT_SIMULATOR_THREADMANAGER_H
