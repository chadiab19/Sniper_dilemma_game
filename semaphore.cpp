
#include <mutex>
#include <condition_variable>
class Semaphore {
public:
    Semaphore(int count = 1) : count_(count) {}

    void wait() {
        std::unique_lock<std::mutex> lock(mutex_);
        while (count_ == 0) {
            condition_.wait(lock);
        }
        count_--;
    }

    void signal() {
        std::lock_guard<std::mutex> lock(mutex_);
        count_++;
        condition_.notify_one();
    }

private:
    std::mutex mutex_;
    std::condition_variable condition_;
    int count_;
};

Semaphore semaphore(1); // Initialize semaphore with 1 resource

void threadFunction(int id) {
    semaphore.wait(); // Wait for resource availability
    //std::cout << "Thread " << id << " is accessing the shared resource." << std::endl;
    // Simulate some work
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    semaphore.signal(); // Release the resource
}
