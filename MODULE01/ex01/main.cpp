#include "Zombie.h"

int main()
{
    Zombie *zs = zombieHorde(42, " ");
    for (int i = 0; i < 42; i++)
	zs[i].announce();
    delete [] zs;
    return (0);
}
