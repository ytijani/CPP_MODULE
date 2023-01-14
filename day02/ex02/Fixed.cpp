#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout<<"Default constructor called"<<std::endl;
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
    nbfixed = roundf(nb * (1<<fbits));
}

int    Fixed::toInt() const
{
    return (nbfixed >> fbits);
}

float   Fixed::toFloat() const
{
    return ((float)this->nbfixed / (1 << this->fbits));
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

bool    Fixed::operator<(Fixed const &op) const
{
    return ((this->nbfixed < op.getRawBits()) ? true : false);
}

bool    Fixed::operator>(Fixed const &op) const
{
    return ((this->nbfixed > op.getRawBits()) ? true : false);
}

bool    Fixed::operator>=(Fixed const &op) const
{
    return ((this->nbfixed >= op.getRawBits()) ? true : false);
}

bool    Fixed::operator<=(Fixed const &op) const
{
    return ((this->nbfixed <= op.getRawBits()) ? true : false);
}

bool    Fixed::operator==(Fixed const &op) const
{
    return ((this->nbfixed == op.getRawBits()) ? true : false);
}

bool    Fixed::operator!=(Fixed const &op) const
{
    return ((this->nbfixed != op.getRawBits()) ? true : false);
}

/*******arithmetic operators: *****************/
Fixed Fixed::operator+(const Fixed & op)
{
    return Fixed(this->toFloat() + op.toFloat());
}

Fixed Fixed::operator-(const Fixed & op)
{
    return Fixed(this->toFloat() - op.toFloat());
}

Fixed   Fixed::operator/(const Fixed &op)
{
    return Fixed(this->toFloat() / op.toFloat());
}

Fixed Fixed::operator*(const Fixed & op)
{
    return Fixed(this->toFloat() * op.toFloat());
}

/*****************increment********************/
Fixed &Fixed::operator++()
{
    ++nbfixed;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->nbfixed++;
    return (tmp);
}

Fixed   &Fixed::operator--()
{
    --nbfixed;
    return (*this); 
}

Fixed   Fixed::operator--(int)
{
   Fixed tmp(*this);
   this->nbfixed--;
   return (tmp); 
}

Fixed  & Fixed::operator=(const Fixed & op)
{
    this->nbfixed = op.getRawBits();
    return (*this);
}

Fixed  &Fixed::min(Fixed &op, Fixed &op1)
{
    if (op < op1)
        return (op);
    return (op1);
}

Fixed const  &Fixed::min(Fixed const &op, Fixed const &op1)
{
    if (op < op1)
        return (op);
    return (op1);
}

Fixed  &Fixed::max(Fixed &op, Fixed &op1)
 {
    if (op > op1)
        return (op);
    return (op1);
}

Fixed const  &Fixed::max(Fixed const &op, Fixed const &op1)
{
    if (op > op1)
        return (op);
    return (op1);
}

std::ostream& operator<<(std::ostream &out, Fixed const &op)
{
    out << op.toFloat();
    return (out);
}

Fixed::~Fixed()
{
    // std::cout<<"Default Desctructor called"<<std::endl;
}