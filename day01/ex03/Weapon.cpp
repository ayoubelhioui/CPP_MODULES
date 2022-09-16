#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
class Weapon{
    private:
        std::string type;
    public:
        void setType(std::string Type){
            type = Type;
        }
        const std::string& getType(){
            const std::string &typeRef = type;
            return (typeRef);
        }

};
#endif