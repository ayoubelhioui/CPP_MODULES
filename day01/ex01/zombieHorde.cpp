
#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string Name){
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(Name);
        zombies[i].announce();
    }
    return (zombies);
}