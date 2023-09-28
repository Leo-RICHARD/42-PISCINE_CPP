#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << _name << " was constructed (FragTrap constructor)" << std::endl;
    _name = "[unnamed FR4G-TP unit]";
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << _name << " was constructed (FragTrap constructor)" << std::endl;
    _hitpoints = 100;
    _energypoints = 100;
    _attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const &model) : ClapTrap()
{
    *this = model;
    std::cout << _name << " was constructed (FragTrap constructor)" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _name << " was destroyed (FragTrap destructor)" << std::endl;
}

void	FragTrap::highFivesGuys()
{
    std::cout << _name << " : high-five guys ?" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
    if (this != &rhs)
    {
	_name = rhs.getName();
	_hitpoints = rhs.getHitPoints();
	_energypoints = rhs.getEnergyPoints();
	_attackdamage = rhs.getAttackDamage();
    }
    return (*this);
}
