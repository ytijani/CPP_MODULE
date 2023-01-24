# ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>


struct Data
{
    int x;
    char c;
};
Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif