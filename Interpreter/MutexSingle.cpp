//
// Created by ben on 12/24/18.
//

#include "MutexSingle.h"


MutexSingle::MutexSingle() {
    if (mutex == nullptr) {
        mutex = new pthread_mutex_t;
        pthread_mutex_init(mutex, nullptr);
    }
}

MutexSingle::~MutexSingle() {
    delete mutex;
}

void MutexSingle::lock() {
    pthread_mutex_lock(mutex);
}

void MutexSingle::unlock() {
    pthread_mutex_destroy(mutex);
}