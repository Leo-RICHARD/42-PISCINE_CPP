#pragma once

#include <iostream>

class	Zombie
{
    std::string name;

    public :

    Zombie(std::string const &);
    ~Zombie(void);
    void announce(void) const;
};

Zombie* newZombie(std::string);
void randomChump(std::string);
