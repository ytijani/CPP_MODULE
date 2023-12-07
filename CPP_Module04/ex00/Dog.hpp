#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &op);
        Dog &operator=(const Dog &op);
        std::string    getType() const;
        void    makeSound() const ;
        ~Dog();
};
#endif