#ifndef XBMAP_H
#define XBMAP_H

#include <map>

namespace XB
{

template <typename Key, typename Data>
bool containsKey(std::map<Key, Data> const& map, Key const& key)
{
    return map.find(key) != map.end();
}

template <typename Key, typename Data, typename... Args>
bool containsKey(std::map<Key, Data> const& map, Key const& key, Args const&... args)
{
    return containsKey(map, key) && containsKey(map, args...);
}

} // namespace XB

#endif // XBMAP_H
