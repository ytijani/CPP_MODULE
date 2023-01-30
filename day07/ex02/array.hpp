#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    class OUTOFRANGE : public std::exception
    {
        const char *what() const throw()
        {
            return ("you can't access to this element");
        }
    };
    private :
        T *arr;
        unsigned int _size;
    public :
        Array()
        {
            arr = new T[0];
            _size = 0;
        }
        Array(unsigned int n)
        {
            arr = new T[n];
            _size = n;
        }
        Array(Array const &obj)
        {
            this->arr = NULL;
            *this = obj;
        }
        Array &operator=(const Array & obj)
        {
            _size = obj._size;
            if (!arr)
                arr = new T[_size];
            *arr = *obj.arr;
            for(unsigned int i = 0 ; i < this->_size; i++)
                arr[i] = obj.arr[i];
            return (*this);
        }
        T &operator[](unsigned int n)
        {
            if (n > this->_size)
                throw OUTOFRANGE();
            return arr[n];
        }

        int size() const
        {
            return (this->_size);
        }
        ~Array()
        {
            delete [] arr;
        }
};

#endif