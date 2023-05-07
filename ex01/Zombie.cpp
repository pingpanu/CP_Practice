#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie() {}

void    Zombie::setname(std::string name) {
    this->_name = name;
}

void    Zombie::announce() {
    cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie() {
    cout << this->_name << " is death" << endl;
}