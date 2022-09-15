#include "Zombie.hpp"


Zombie* newZombie( std::string Name ) {
    Zombie* zombie = new Zombie();
    zombie->setName(Name);
    return (zombie);
}

void    Zombie::setName(std::string Name){
        name = Name;
}

void Zombie::announce(void){
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void   randomChump( std::string Name ){
        Zombie zombie;
        zombie.setName(Name);
         zombie.announce();
}

Zombie::Zombie() {
    std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie(){
        std::cout << "Destructor called" << std::endl;
//        delete()
}

