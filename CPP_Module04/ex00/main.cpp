#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal;
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout<<j->getType()<<" "<<std::endl;
    std::cout<<i->getType()<<" "<<std::endl;

    j->makeSound();
    i->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    /*********************check_prob***********************/

    // const WrongAnimal *meta = new WrongAnimal;
    // const WrongAnimal *j = new WrongCat();

    // std::cout<<j->getType()<<" "<<std::endl;
    // j->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete j;
}