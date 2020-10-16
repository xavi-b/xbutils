#ifndef XBSTRING_H
#define XBSTRING_H

#include <chrono>
#include <iostream>

namespace XB
{

struct FunctionTimer
{
    std::string _func;

    std::chrono::time_point<std::chrono::high_resolution_clock> _start;

    FunctionTimer(const char* func) : _func(func), _start(std::chrono::high_resolution_clock::now())
    {
    }

    ~FunctionTimer()
    {
        std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
        int elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - _start).count();

        std::cout << "Elapsed in " << _func << " : " << elapsed << "ms" << std::endl;
    }
};

} // namespace XB

#define TIME_ME XB::FunctionTimer __local_timer__(__PRETTY_FUNCTION__)

#endif