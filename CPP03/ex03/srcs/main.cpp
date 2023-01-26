#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void) {

	ClapTrap	object_1("Anakin");
	ScavTrap	object_2("Obi-Wan");
	FragTrap	object_3("Palpatine");
	DiamondTrap	object_4("Master Windu");

	std::cout << "\n" << object_1.getName() << " has    : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has   : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD" << std::endl;
	std::cout << object_3.getName() << " has : " << object_3.getHitPoints() << " HP / " << object_3.getEnergyPoints() << " EP / " << object_3.getAttackDamage() << " AD" << std::endl;
	std::cout << object_4.getName() << " has : " << object_4.getHitPoints() << " HP / " << object_4.getEnergyPoints() << " EP / " << object_4.getAttackDamage() << " AD\n" << std::endl;

	object_1.attack(object_2.getName());
	object_2.takeDamage(object_1.getAttackDamage());

	object_2.attack("Anakin");
	object_1.takeDamage(object_2.getAttackDamage());

	object_3.attack("Obi-Wan");
	object_2.takeDamage(object_3.getAttackDamage());

	std::cout << "\n" << object_1.getName() << " has    : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has   : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD" << std::endl;
	std::cout << object_3.getName() << " has : " << object_3.getHitPoints() << " HP / " << object_3.getEnergyPoints() << " EP / " << object_3.getAttackDamage() << " AD\n" << std::endl;

	object_1.beRepaired(10);
	object_2.beRepaired(100);
	object_3.highFiveGuys();

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD" << std::endl;
	std::cout << object_3.getName() << " has : " << object_3.getHitPoints() << " HP / " << object_3.getEnergyPoints() << " EP / " << object_3.getAttackDamage() << " AD\n" << std::endl;

	object_1.setAttackDamage(50);
	object_3.setAttackDamage(100);

	std::cout << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD" << std::endl;
	std::cout << object_3.getName() << " has : " << object_3.getHitPoints() << " HP / " << object_3.getEnergyPoints() << " EP / " << object_3.getAttackDamage() << " AD\n" << std::endl;

	object_1.attack("Obi-Wan");
	object_2.takeDamage(object_1.getAttackDamage());
	object_3.attack("Obi-Wan");
	object_2.takeDamage(object_3.getAttackDamage());

	std::cout << "\n" << object_1.getName() << " has  : " << object_1.getHitPoints() << " HP / " << object_1.getEnergyPoints() << " EP / " << object_1.getAttackDamage() << " AD" << std::endl;
	std::cout << object_2.getName() << " has : " << object_2.getHitPoints() << " HP / " << object_2.getEnergyPoints() << " EP / " << object_2.getAttackDamage() << " AD" << std::endl;
	std::cout << object_3.getName() << " has : " << object_3.getHitPoints() << " HP / " << object_3.getEnergyPoints() << " EP / " << object_3.getAttackDamage() << " AD\n" << std::endl;

	object_2.attack("Anakin");
	object_2.guardGate();

	return (0);
}