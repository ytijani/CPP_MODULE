#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &op);
        WrongCat &operator=(const WrongCat &op);
        std::string    getType() const;
        void    makeSound() const ;
        ~WrongCat();
};
#endif