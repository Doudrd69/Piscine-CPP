#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	setHitPoints(0);
	setEnergyPoints(0);
	setAttackDamage(0);
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) {

	setName(name);
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap constructor(name) called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj) {

	(void)obj;
	return ;
}

void	DiamondTrap::operator=(const DiamondTrap& obj) {

	(void)obj;
	return ;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}
