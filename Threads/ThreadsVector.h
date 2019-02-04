//
// Created by Yaron Israel on 2018-12-24.
//

#ifndef FLIGHT_SIMULATOR_THREADSVECTOR_H
#define FLIGHT_SIMULATOR_THREADSVECTOR_H

#include <vector>
#include <pthread.h>

extern std::vector<pthread_t*> threadsVector;
extern bool stopThreads;

class ThreadsVector {

};


#endif //FLIGHT_SIMULATOR_THREADSVECTOR_H
