#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Defaults constructor called"<<std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &op)
{
    std::cout<<"Dog Copy constructor called"<<std::endl;
    this->brain = NULL;
    *this = op;
}

Dog &Dog::operator=(const Dog &op)
{
    this->type = op.type;
    if (!this->brain)
        this->brain = new Brain();
    *(this->brain) = *op.brain;
    return (*this);
}

std::string Dog::getType() const
{
    return (type);
}

void    Dog::makeSound() const
{
    std::cout<<this->type + " say howhowhow"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog  Desctructor called"<<std::endl;
    delete brain;
}