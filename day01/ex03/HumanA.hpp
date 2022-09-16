#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon &weapon;
        HumanA();
    public:
        HumanA(std::string Name, Weapon &weapon);
        void    attack();
};

#endif