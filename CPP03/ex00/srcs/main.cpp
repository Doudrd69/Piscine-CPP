#include "../includes/ClapTrap.hpp"

int	main(void) {

	ClapTrap object("Anakin");

	std::cout << object.getName() << " has " << object.getHitPoints() << " HP";
	std::cout << " / " << object.getEnergyPoints() << " EP";
	std::cout << " / " << object.getAttackDamage() << " AD" << std::endl;

	object.attack("Obi-Wan");
	object.takeDamage(5);
	object.beRepaired(2);

	std::cout << object.getName() << " has " << object.getHitPoints() << " HP";
	std::cout << " / " << object.getEnergyPoints() << " EP";
	std::cout << " / " << object.getAttackDamage() << " AD" << std::endl;

	return (0);
}