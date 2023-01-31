#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void) {

	DiamondTrap object("Master Windu");

	std::cout << object.getName() << " has " << object.getHitPoints() << " HP";
	std::cout << " / " << object.getEnergyPoints() << " EP";
	std::cout << " / " << object.getAttackDamage() << " AD" << std::endl;

	object.whoAmI();

	return (0);
}