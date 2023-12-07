#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat Defaults constructor called"<<std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &op)
{
    std::cout<<"WrongCat Copy constructor called"<<std::endl;
    *this = op;
}

WrongCat &WrongCat::operator=(const WrongCat &op)
{
    this->type = op.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (type);
}

void    WrongCat::makeSound() const
{
    std::cout<<this->type + " say meaowmeaow"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat  Desctructor called"<<std::endl;
}