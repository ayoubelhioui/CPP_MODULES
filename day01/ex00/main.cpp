#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("issam");
    Zombie a("ayoub");
    a.announce();
    z->announce();
    delete z;
}