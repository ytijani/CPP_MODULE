#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Defaults constructor called"<<std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &op)
{
    std::cout<<"Cat Copy constructor called"<<std::endl;
    *this = op;
}

Cat &Cat::operator=(const Cat &op)
{
    this->type = op.type;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void    Cat::makeSound() const
{
    std::cout<<this->type + " say meow meow"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat  Desctructor called"<<std::endl;
    delete brain;
}