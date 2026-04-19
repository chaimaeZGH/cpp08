#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <list>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &a, int b)
{
    typename T::iterator ss = find(a.begin(), a.end(), b);
    if (ss == a.end())
        throw std::out_of_range("Element not found");
    return ss;
};

#endif