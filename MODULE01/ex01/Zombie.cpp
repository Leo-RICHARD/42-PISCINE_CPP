#include "Zombie.h"

Zombie::Zombie ()
{
}

Zombie::Zombie (std::string const &n)
{
   name = n; 
}

Zombie::~Zombie ()
{
    std::cout << name << " destroyed" << std::endl;
}

void Zombie::setname (std::string const &s)
{
   name = s;
}

void Zombie::announce () const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
