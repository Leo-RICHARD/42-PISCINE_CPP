#include "ClapTrap.h"

ClapTrap::ClapTrap() : _name("[unnamed CL4P-TP unit]"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << _name << " was constructed (ClapTrap constructor)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &model)
{
    *this = model;
    std::cout << _name << " was constructed (ClapTrap constructor)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " was destroyed (ClapTrap destuctor)" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
    if (_hitpoints && _energypoints)
    {
	std::cout << _name << " attacks " << target << " and deals " << _attackdamage << " points of damage";
	_energypoints--;
    }
    else
	std::cout << _name << " wants to attack " << target << ", be he's out of energy";
    std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (amount < 0)
	return;
    if (_hitpoints)
	std::cout << _name << " takes " << amount << " points of damage";
    else
	std::cout << _name << " is already broken";
    std::cout << std::endl;
    if (amount >= (unsigned int)_hitpoints)
	std::cout << _name << " is broken" << std::endl;
    if (_hitpoints - amount < 0)
	amount = _hitpoints;
    _hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (amount < 0)
	return;
   if (_energypoints)
   {
	std::cout << _name << " repairs himself and regains " << amount << " HP ";
	_energypoints--;
	_hitpoints += amount;
   }
   else
       std::cout << _name << " wants to repair itself but he's out of energy";
   std::cout << std::endl;
}

std::string	ClapTrap::getName() const
{
    return (_name);
}

void	ClapTrap::setName(std::string const &s)
{
    _name = s;
}

int	ClapTrap::getHitPoints() const
{
    return (_hitpoints);
}

int	ClapTrap::getEnergyPoints() const
{
    return (_energypoints);
}

int	ClapTrap::getAttackDamage() const
{
    return (_attackdamage);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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
