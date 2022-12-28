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

void    Fixed::setRawBits(int const raw)
{
    this->nbfixed = raw;
}

int    Fixed::getRawBits() const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->nbfixed);
}

Fixed  & Fixed::operator=(const Fixed & op)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->nbfixed = op.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}