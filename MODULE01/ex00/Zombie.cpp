#include "Zombie.h"

Zombie::Zombie (std::string const &n)
{
   name = n; 
}

Zombie::~Zombie ()
{
    std::cout << name << " destroyed" << std::endl;
}

void	Zombie::announce () const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
