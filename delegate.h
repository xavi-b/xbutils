#ifndef DELEGATE_H
#define DELEGATE_H

#include <iostream>
#include <functional>
#include <algorithm>
#include <unordered_set>
#include <vector>

namespace XB
{

template <class... Args>
class Delegate
{
private:
    std::vector<std::function<void(Args...)>> registeredFunctions_;

public:
    void exec(Args... args);

    Delegate& add(std::function<void(Args...)> const& f);
    Delegate& clear();

    void operator()(Args... args);

    Delegate& operator+=(std::function<void(Args...)> const& f);
};

} // namespace XB

#include "delegate.impl.h"

#endif