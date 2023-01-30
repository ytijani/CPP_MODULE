#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T1, typename T2>
void iter(T1 *arr, T2 len, void (*func)(T1 const &))
{
    for (T2 i = 0; i < len; i++)
        func(arr[i]);
}


#endif