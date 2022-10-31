#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon(NULL);
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    // {
    //     Weapon club = Weapon(NULL);
    //     HumanB jim("Jim");
    //     jim.setWeapon(club);
    //     jim.attack();
    //     club.setType("some other type of club");
    //     jim.attack();
    // }
    return 0;
}