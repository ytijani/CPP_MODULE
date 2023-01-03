#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &op);
        Cat &operator=(const Cat &op);
        std::string  getType() const;
        void    makeSound() const ;
        virtual ~Cat();
};
# endif