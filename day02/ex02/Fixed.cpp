#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nbfixed = 0;
}

Fixed::Fixed(const Fixed &op)
{
    *this = op;
}

Fixed::Fixed(const int nb)
{
   nbfixed = nb << fbits;
}

Fixed::Fixed(const float nb)
{
    nbfixed = roundf((nb * (float)(1<<fbits)));
}

int    Fixed::toInt() const
{
    return (nbfixed >> fbits);
}

float   Fixed::toFloat() const
{
    return ((float)nbfixed / (float)(1<<fbits));
}

void    Fixed::setRawBits(int const raw)
{
    this->nbfixed = raw;
}

int    Fixed::getRawBits() const
{
    return (this->nbfixed);
}

/*******comparison operators*****************/
bool    Fixed::operator<(Fixed const &op)
{
    return ((this->nbfixed < op.nbfixed) ? true : false);
}

bool    Fixed::operator>(Fixed const &op)
{
    return ((this->nbfixed > op.nbfixed) ? true : false);
}

bool    Fixed::operator>=(Fixed const &op)
{
    return ((this->nbfixed >= op.nbfixed) ? true : false);
}

bool    Fixed::operator<=(Fixed const &op)
{
    return ((this->nbfixed <= op.nbfixed) ? true : false);
}

bool    Fixed::operator==(Fixed const &op)
{
    return ((this->nbfixed = op.nbfixed) ? true : false);
}

bool    Fixed::operator!=(Fixed const &op)
{
    return ((this->nbfixed != op.nbfixed) ? true : false);
}

/*******arithmetic operators: *****************/
Fixed &Fixed::operator+(const Fixed & op)
{
    this->nbfixed = nbfixed + op.nbfixed;
    return(*this);
}

Fixed &Fixed::operator-(const Fixed & op)
{
    this->nbfixed = nbfixed - op.nbfixed;
    return(*this);
}

Fixed   &Fixed::operator/(const Fixed &op)
{
    this->nbfixed = nbfixed / op.nbfixed;
    return (*this);
}

Fixed &Fixed::operator*(const Fixed & op)
{
    std::cout<<"multep"<<std::endl;
    this->nbfixed = nbfixed * op.nbfixed;
    return (*this);
}

/*****************increment********************/
Fixed &Fixed::operator++()
{
    ++nbfixed;
    return (*this);
}

Fixed &Fixed::operator++(int)
{
    this->nbfixed++;
    return (*this);
}

Fixed   &Fixed::operator--()
{
    --nbfixed;
    return (*this); 
}

Fixed   &Fixed::operator--(int)
{
    nbfixed--;
    return (*this); 
}

Fixed  & Fixed::operator=(const Fixed & op)
{
    this->nbfixed = op.nbfixed;
    return (*this);
}

int &Fixed::min(Fixed &op, Fixed &op1)
{
    if (op.nbfixed < op1.nbfixed)
        return (op.nbfixed);
    return (op1.nbfixed);
}

const int &Fixed::min(Fixed const &op,Fixed const &op1)
{
    if (op.nbfixed < op1.nbfixed)
        return (op.nbfixed);
    return (op1.nbfixed);
}

int &Fixed::max(Fixed &op, Fixed &op1)
{
    if (op.nbfixed > op1.nbfixed)
        return (op.nbfixed);
    return (op1.nbfixed);
}

const int &Fixed::max(Fixed const &op,Fixed const &op1)
{
    if (op.nbfixed > op1.nbfixed)
        return (op.nbfixed);
    return (op1.nbfixed);
}

std::ostream& operator<<(std::ostream &out, const Fixed &op)
{
    std::cout<< op.toFloat();
    return (out);
}