#include "Zombie.h"

int main()
{
    Zombie *z = newZombie("z");
    randomChump("Token");
    z->announce();
    delete z;
    return (0);
}
