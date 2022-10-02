#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(10, "Ayoub");
    Zombie *zombiesHelloWorld = zombieHorde(2, "HelloWorld");
    delete [] zombiesHelloWorld;
    delete[] zombies;
}