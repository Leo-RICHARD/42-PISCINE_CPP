#include "HumanB.h"

HumanB::HumanB() : _name("[name]")
{
}

HumanB::HumanB(std::string const &n, Weapon *w) : _name(n), _weap(w)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon w)
{
    _weap = &w;
}

void	HumanB::attack() const
{
    if (_weap)
	std::cout << _name << " attacks with their " << _weap->getType() <<  std::endl; 
    else
	std::cout << _name << " attacks with their [weaponized nothingness]" << std::endl; 
}
