#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
    private :
        int nbfixed;
        const static int fbits = 8;
    public :
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed & op);
        Fixed   &operator= (const Fixed & op);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void)const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed &op);
#endif