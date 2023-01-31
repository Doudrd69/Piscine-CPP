#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void) {

	ClapTrap object_1("Anakin");
	ScavTrap object_2("Obi-Wan");

	std::cout << object_1.getName() << " has " << object_1.getHitPoints() << " HP";
	std::cout << " / " << object_1.getEnergyPoints() << " EP";
	std::cout << " / " << object_1.getAttackDamage() << " AD" << std::endl;

	std::cout << object_2.getName() << " has " << object_2.getHitPoints() << " HP";
	std::cout << " / " << object_2.getEnergyPoints() << " EP";
	std::cout << " / " << object_2.getAttackDamage() << " AD" << std::endl;

	object_2.attack("Anakin");
	object_1.takeDamage(object_2.getAttackDamage());

	std::cout << object_1.getName() << " has " << object_1.getHitPoints() << " HP";
	std::cout << " / " << object_1.getEnergyPoints() << " EP";
	std::cout << " / " << object_1.getAttackDamage() << " AD" << std::endl;

	std::cout << object_2.getName() << " has " << object_2.getHitPoints() << " HP";
	std::cout << " / " << object_2.getEnergyPoints() << " EP";
	std::cout << " / " << object_2.getAttackDamage() << " AD" << std::endl;

	object_2.guardGate();

	return (0);
}