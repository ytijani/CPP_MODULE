#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &op);
        WrongAnimal &operator=(const WrongAnimal &op);
        std::string    getType() const;
        void    makeSound() const ;
        ~WrongAnimal();
};


#endif