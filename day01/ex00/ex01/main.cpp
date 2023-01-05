#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *z = zombieHorde(N,"teek");
    for(int i = 0; i < N; i++)
        z[i].announce();
    delete [] z;
}