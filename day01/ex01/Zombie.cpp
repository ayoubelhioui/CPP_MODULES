#include "Zombie.hpp"

void    Zombie::setName(std::string Name){
        name = Name;
}

void Zombie::announce(void){
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Destructor Called" << std::endl;
}
