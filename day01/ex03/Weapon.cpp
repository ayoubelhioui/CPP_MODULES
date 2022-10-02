#include "Weapon.hpp"

Weapon::Weapon(std::string Type) {
    type = Type;
}

void    Weapon::setType(std::string Type){
    type = Type;
}

const std::string& Weapon::getType() {
    return (type);
}