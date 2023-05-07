#include "Zombie.hpp"

void    randomChump(std::string name)
{
    if (name.empty())
        return ;
    Zombie  *newz = newZombie(name);
    newz->announce();
    delete  newz;
}