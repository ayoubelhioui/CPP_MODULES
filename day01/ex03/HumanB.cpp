#include "HumanB.hpp"


HumanB::HumanB(std::string Name) : weapon(NULL){
    name = Name;
}

void HumanB ::setWeapon(Weapon &w){
    weapon = &w;
}

void    HumanB::attack() {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}