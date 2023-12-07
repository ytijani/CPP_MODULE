#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &op);
        Cat &operator=(const Cat &op);
        std::string  getType() const;
        void    makeSound()const ;
        ~Cat();
};
# endif