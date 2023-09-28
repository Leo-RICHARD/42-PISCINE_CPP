#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int to_find)
{
    typename T::iterator i;

    i = std::find(container.begin(), container.end(), to_find);
    
    return (i);
}
