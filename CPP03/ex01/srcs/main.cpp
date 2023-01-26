#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void) {

	ClapTrap object_1("Anakin");
	ScavTrap object_2("Obi-Wan");

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD\n" << std::endl;

	object_1.attack(object_2.getName());
	object_2.takeDamage(object_1.getAttackDamage());

	object_2.attack("Anakin");
	object_1.takeDamage(object_2.getAttackDamage());

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD\n" << std::endl;

	object_1.beRepaired(10);

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD\n" << std::endl;

	object_2.setAttackDamage(100);

	std::cout << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD\n" << std::endl;

	object_2.attack("Anakin");
	object_1.takeDamage(object_2.getAttackDamage());

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD\n" << std::endl;

	return (0);
}