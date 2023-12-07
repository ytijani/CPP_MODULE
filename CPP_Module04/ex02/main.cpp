#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal op;
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
}