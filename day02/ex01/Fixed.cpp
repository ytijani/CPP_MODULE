#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    this->nbfixed = 0;
}

Fixed::Fixed(const Fixed &op)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = op;
}

Fixed::Fixed(const int nb)
{
   std::cout<<"Int constructor called"<<std::endl;
   nbfixed = nb << fbits;
}

Fixed::Fixed(const float nb)
{
    std::cout<<"Float constructor called"<<std::endl;
    nbfixed = roundf((nb * (1<<fbits)));
}

int    Fixed::toInt() const
{
    return (nbfixed >> fbits);
}

float   Fixed::toFloat() const
{
    return ((float)nbfixed / (1<<fbits));
}

void    Fixed::setRawBits(int const raw)
{
    this->nbfixed = raw;
}

int    Fixed::getRawBits() const
{
    return (this->nbfixed);
}

Fixed  & Fixed::operator=(const Fixed & op)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->nbfixed = op.nbfixed;
    return (*this);
}

Fixed::~Fixed() 
{
    std::cout<<"Destructor called"<<std::endl;
}

std::ostream& operator<<(std::ostream &out, const Fixed &op)
{
    std::cout<< op.toFloat();
    return (out);
}