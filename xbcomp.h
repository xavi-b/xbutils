#ifndef XBCOMP_H
#define XBCOMP_H

#include <map>

namespace XB
{
    template <typename T>
    T const& max(T const &a, T const &b) { return std::max(a, b); }

    template <typename T, typename... Args>
    T const& max(T const &a, Args const &... b) { return max(a, max(b...)); }

    template <typename T>
    T const& min(T const &a, T const &b) { return std::min(a, b); }

    template <typename T, typename... Args>
    T const& min(T const &a, Args const &... b) { return min(a, min(b...)); }

} // namespace XB

#endif
