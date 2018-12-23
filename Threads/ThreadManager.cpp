//
// Created by Yaron Israel on 2018-12-23.
//

#include "ThreadManager.h"


ThreadManager::ThreadManager() {
    th = new pthread_t;
}

ThreadManager::~ThreadManager() {
    delete th;
}

bool ThreadManager::shouldStopThread() {
    return exitThread;
}

void ThreadManager::toggleExitThread() {
    exitThread = !exitThread;
}

pthread_t* ThreadManager::getThread() {
    return th;
}

void ThreadManager::finish() {
    toggleExitThread();
    char *b;
    pthread_join(*getThread(), (void**)&b);
}