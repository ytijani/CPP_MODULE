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
    /*******comparison operators*****************/
        bool   operator<(Fixed const &op);
        bool   operator>(Fixed const &op);
        bool   operator>=(Fixed const &op);
        bool   operator<=(Fixed const &op);
        bool   operator==(Fixed const &op);
        bool   operator!=(Fixed const &op);

    /*******arithmetic operators: *****************/
        Fixed   &operator+(const Fixed &op);
        Fixed   &operator-(const Fixed &op);
        Fixed   &operator*(const Fixed &op);
        Fixed   &operator/(const Fixed &op);
    /*****************increment********************/
        Fixed   &operator++();
        Fixed   &operator++(int);
        Fixed   &operator--();
        Fixed   &operator--(int);
        static int  &min(Fixed &op, Fixed &op1);
        static const int  &min(Fixed const &op, Fixed const &op1);
        static int  &max(Fixed &op, Fixed &op1);
        static const int  &max(Fixed const &op, Fixed const &op1);

        // ~Fixed();
};

std::ostream& operator<<(std::ostream &out, const Fixed &op);
#endif