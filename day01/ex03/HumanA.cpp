#include "HumanA.hpp"

 HumanA::HumanA(std::string Name, Weapon &weapon) : name(Name), weapon(weapon){}

void    HumanA::attack() {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}