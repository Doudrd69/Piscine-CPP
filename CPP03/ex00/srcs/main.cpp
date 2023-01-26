#include "../includes/ClapTrap.hpp"

int	main(void) {

	ClapTrap object_1("Anakin");
	//ClapTrap object_2("Obi-Wan");

	object_1.attack("Obi-Wan");

	//std::cout << "==> " << object_1.getName() << " has now : " << object_1.getHitPoints() << " HP and " << object_1.getEnergyPoints() << " EP" << std::endl;
	//std::cout << "==> " << object_2.getName() << " has now : " << object_2.getHitPoints() << " HP and " << object_2.getEnergyPoints() << " EP" << std::endl;

	//object_2.attack(object_1.getName());

	std::cout << "==> " << object_1.getName() << " has now : " << object_1.getHitPoints() << " HP and " << object_1.getEnergyPoints() << " EP" << std::endl;

	object_1.takeDamage(5);
	
	std::cout << "==> " << object_1.getName() << " has now : " << object_1.getHitPoints() << " HP and " << object_1.getEnergyPoints() << " EP" << std::endl;

	object_1.beRepaired(4);
	
	std::cout << "==> " << object_1.getName() << " has now : " << object_1.getHitPoints() << " HP and " << object_1.getEnergyPoints() << " EP" << std::endl;

	return (0);
}