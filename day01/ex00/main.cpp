#include "Zombie.hpp"

void ma()
{

}
int main()
{
   Zombie *z = newZombie("issam");
   z->announce();
   delete z;
}