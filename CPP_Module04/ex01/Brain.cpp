#include "Brain.hpp"


Brain::Brain()
{
    std::cout<<"Brain Defaults constructor called"<<std::endl;
}

Brain::Brain(const Brain &op)
{
    std::cout<<"Brain Copy constructor called"<<std::endl;
    *this = op;
}

Brain &Brain::operator=(const Brain &op)
{
    std::cout<<"Copy Assignment Operator called"<<std::endl;
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = op.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain Desctructor called"<<std::endl;
}
