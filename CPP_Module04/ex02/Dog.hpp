#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &op);
        Dog &operator=(const Dog &op);
        std::string    getType() const;
        void    makeSound() const ;
        virtual ~Dog();
};
#endif