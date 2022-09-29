#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
class Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string Type);
        void setType(std::string Type);
        const std::string& getType();
};
#endif