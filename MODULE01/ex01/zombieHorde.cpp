#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
    Zombie *zs = new Zombie[N];
    for (int i = 0; i < N; i++)
	zs[i].setname(name);
    return (zs);
}

