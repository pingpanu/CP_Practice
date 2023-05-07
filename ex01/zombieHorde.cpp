#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *newz= new Zombie[N];
    for (int i = 0; i < N; i++)
        newz[i].setname(name);
    return (newz);
}