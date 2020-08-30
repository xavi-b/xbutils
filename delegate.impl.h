#ifndef DELEGATE_IMPL_H
#define DELEGATE_IMPL_H

namespace XB
{

template <class... Args>
void Delegate<Args...>::exec(Args... args)
{
    for (auto& m : registeredFunctions_)
        if (m)
            m(args...);
}

template <class... Args>
Delegate<Args...>& Delegate<Args...>::add(std::function<void(Args...)> const& f)
{
    registeredFunctions_.push_back(f);
    return *this;
}

template <class... Args>
Delegate<Args...>& Delegate<Args...>::clear()
{
    registeredFunctions_.clear();

    return *this;
}

template <class... Args>
void Delegate<Args...>::operator()(Args... args)
{
    exec(args...);
}

template <class... Args>
Delegate<Args...>& Delegate<Args...>::operator+=(std::function<void(Args...)> const& f)
{
    return add(f);
}

} // namespace XB

#endif