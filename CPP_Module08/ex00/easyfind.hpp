#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T & A, int value)
{
    typename T::iterator it = std::find(A.begin(), A.end(), value);
    if (it == A.end())
        throw std::runtime_error("Element Not Found");
    return (it);
}

#endif