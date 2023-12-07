#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal Defaults constructor called"<<std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &op)
{
    std::cout<<"WrongAnimal Copy constructor called"<<std::endl;
    *this = op;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op)
{
    this->type = op.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout<<this->type + " say hello!"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Animal Desctructor called"<<std::endl;
}

