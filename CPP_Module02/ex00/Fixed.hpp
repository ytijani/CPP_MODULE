
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int nbfixed;
        const static int fbits = 8;
    public :
        Fixed();
        Fixed(const Fixed & op);
        Fixed   &operator= (const Fixed & op);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        ~Fixed();
};

#endif