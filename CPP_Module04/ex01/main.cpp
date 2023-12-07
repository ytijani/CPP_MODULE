#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        delete j;
        delete i;
    }
    
    // {
    //     Dog a;

    //     Dog b = a;
    // }
    // {
    //     const Animal *meta[10];
    //     for(int i = 0; i < 10; i++)
    //     {
    //         if (i < 5)
    //             meta[i] = new Dog();
    //         else
    //             meta[i] = new Cat();
    //     }
    //     for(int i = 0; i < 10; i++)
    //         meta[i]->makeSound();
    //     for(int i = 0; i < 10; i++)
    //         delete meta[i];
    // }
}