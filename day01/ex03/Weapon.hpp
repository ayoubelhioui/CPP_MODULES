#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
class Weapon{
    public:
        Weapon(std::string Type);
        void setType(std::string Type);
        const std::string& getType();
    private:
        std::string type;
};
#endif