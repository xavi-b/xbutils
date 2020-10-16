#ifndef XBSINGLETON_H
#define XBSINGLETON_H

namespace XB
{

template<class T>
class Singleton
{
public:
    static T* instance()
    {
        static T i;
        return &i;
    }
};

}

// #include <iostream>
// class A : public Singleton<A>
// {
// public:
//     void hello_world() { std::cout << "Hello World!" << std::endl; }
// };

#endif