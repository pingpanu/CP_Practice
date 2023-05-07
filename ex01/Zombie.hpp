#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

        void    announce( void );
        void    setname(std::string name);
    private:
        std::string _name;
};

Zombie  *zombieHorde(int N, std::string name);
#endif