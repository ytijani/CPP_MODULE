#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int nbfixed;
        static const int fbits = 8;
    public :
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed & op);

        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void)const;

    /*******comparison operators*****************/
        bool   operator<(Fixed const &op) const;
        bool   operator>(Fixed const &op) const;
        bool   operator>=(Fixed const &op) const;
        bool   operator<=(Fixed const &op) const;
        bool   operator==(Fixed const &op) const;
        bool   operator!=(Fixed const &op) const;
    /*******arithmetic operators: *****************/
        Fixed   &operator= (Fixed const & op) const;
        Fixed   operator+(const Fixed &op);
        Fixed   operator-(const Fixed &op);
        Fixed   operator*(const Fixed &op);
        Fixed   operator/(const Fixed &op);
    /*****************increment********************/
        Fixed   operator++();
        Fixed   operator++(int);
        Fixed   operator--();
        Fixed   operator--(int);

        static Fixed  &min(Fixed &op, Fixed &op1);
        static Fixed const  &min(Fixed const &op, Fixed const &op1);
        static Fixed  &max(Fixed &op, Fixed &op1);
        static Fixed const  &max(Fixed const &op, Fixed const &op1);

        // ~Fixed();
};

std::ostream& operator<<(std::ostream &out, Fixed const &op);
#endif