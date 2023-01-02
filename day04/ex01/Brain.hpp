#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &op);
        Brain &operator=(const Brain &op);
        ~Brain();
};

#endif