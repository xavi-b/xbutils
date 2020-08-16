#ifndef XBSTRING_H
#define XBSTRING_H

#include <string>
#include <algorithm>

namespace XB
{

// String replace
void replace(std::string& str, char oldC, char newC)
{
    std::replace(str.begin(), str.end(), oldC, newC);
}

}

#endif
