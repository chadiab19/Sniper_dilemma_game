#ifndef SEMAPHORE_HPP
#define SEMAPHORE_HPP


#include <mutex>
#include <condition_variable>

class Semaphore {
public:
    Semaphore(int count = 1);

    void wait();

    void signal();

private:
    std::mutex mutex_;
    std::condition_variable condition_;
    int count_;
};


#endif // SEMAPHORE_HPP
