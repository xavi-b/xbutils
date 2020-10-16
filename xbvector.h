#include <vector>
#include <algorithm>

// vector << value1 << value2;
template <class T>
std::vector<T>& operator<<(std::vector<T>& v, const T& t)
{
    v.push_back(t);
    return v;
}

// vector1 << vector2 << vector3;
template <class T>
std::vector<T>& operator<<(std::vector<T>& vIn, std::vector<T>& v)
{
    vIn.insert(vIn.end(), v.begin(), v.end());
    return vIn;
}

namespace XB
{

// Vector replace
template <class T>
void replace(std::vector<T>& v, const T& oldT, const T& newT)
{
    std::replace(v.begin(), v.end(), oldT, newT);
}

// function overloading
/*
void reset(int& i)
{
    i = 0;
}
*/
template <typename T>
void reset(std::vector<T>& vec)
{
    for (T& value : vec)
        reset(value);
}

} // namespace XB
