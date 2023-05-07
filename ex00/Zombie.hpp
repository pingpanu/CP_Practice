#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>

class Zombie
{
    public:
        Zombie(std::string input);
        ~Zombie(void);

        void    announce( void );
    private:
        std::string _name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
#endif