#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie(std::string input) {
    this->_name = input;
}

void    Zombie::announce() {
    cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie() {
    cout << this->_name << " is death" << endl;
}