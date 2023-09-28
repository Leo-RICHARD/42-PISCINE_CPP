#include "ClapTrap.h"
#include "ScavTrap.h"

int	main()
{
    ClapTrap clappy("Clappy");
    ScavTrap scavvy;

    scavvy.attack(clappy.getName());
    clappy.takeDamage(scavvy.getAttackDamage());
    clappy.beRepaired(1);
    clappy.attack(scavvy.getName());
    scavvy.takeDamage(clappy.getAttackDamage());
    std::cout << clappy.getName() << " decides to uses his special combat skill to steal the ennemies' stats" << std::endl << "......WOOOOOOSHHH !....." << std::endl;
    clappy = scavvy;
    clappy.setName("Clappy");
    clappy.attack(scavvy.getName());
    scavvy.takeDamage(clappy.getAttackDamage());
    scavvy.guardGate();

    return (0);
}
