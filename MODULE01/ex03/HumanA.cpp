#include "HumanA.h"

HumanA::HumanA(std::string const &n, Weapon &w) : _name(n), _weap(w)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weap.getType() << std::endl; 
}
