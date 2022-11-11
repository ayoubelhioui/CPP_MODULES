#include "Zombie.hpp"

int main()
{
    Zombie *z = newZombie("abdesamad");
    Zombie a("ayoub");
    a.announce();
    z->announce();
    randomChump("hello");
    delete z;
}