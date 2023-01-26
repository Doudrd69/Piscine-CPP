#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() {

	setHitPoints(0);
	setEnergyPoints(0);
	setAttackDamage(0);
	std::cout << "FragTrap default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) {

	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap constructor(name) called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

void FragTrap::operator=(const FragTrap& obj) {

	(void)obj;
	return ;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void	FragTrap::setNameFragTrap(std::string name) {

	setName(name);
	return ;
}

void	FragTrap::highFiveGuys() {

	std::cout << "PLease guys, let's stop, i want a high five! Come on!" << std::endl;
	return ;
}