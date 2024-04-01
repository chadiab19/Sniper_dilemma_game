#ifndef GLOBALVARIABLE_H
#define GLOBALVARIABLE_H
#include <mutex>
#include <condition_variable>
extern bool condition;
extern std::mutex mtx;
extern std::condition_variable cv;

#endif // GLOBALVARIABLE_H
