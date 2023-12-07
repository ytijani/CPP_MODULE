#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal Defaults constructor called"<<std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &op)
{
    std::cout<<"Animal Copy constructor called"<<std::endl;
    *this = op;
}

Animal &Animal::operator=(const Animal &op)
{
    this->type = op.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}


Animal::~Animal()
{
    std::cout<<"Animal Desctructor called"<<std::endl;
}
