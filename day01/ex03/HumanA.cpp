#include "HumanA.hpp"

 HumanA::HumanA(std::string Name, Weapon &weapon) : weapon(weapon){
    name = Name;
}

void    HumanA::attack() {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}