#include "Zombie.hpp"


Zombie* newZombie( std::string Name ) {
    Zombie* zombie = new Zombie(Name);
    return (zombie);
}

void   randomChump( std::string Name ){
    Zombie zombie(Name);
    zombie.announce();
}

void Zombie::announce(void){
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string Name) : name(Name){
    std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Destructor called" << std::endl;
}

