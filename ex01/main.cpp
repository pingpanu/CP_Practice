#include "Zombie.hpp"
#include <cstdlib>

using std::cout;
using std::endl;

int main()
{
    int             no;
    std::string     name;
    Zombie          *hordes;

    cout << "type number of zombie horde" << endl;
    std::cin >> no;
    cout << "type name of the zombie horde" << endl;
    std::cin >> name;
    hordes = zombieHorde(no, name);
    for (int i = 0; i < no; i++)
        hordes[i].announce();
    delete [] hordes;
    return (0);
}