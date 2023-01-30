#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() {

	setHitPoints(0);
	setEnergyPoints(0);
	setAttackDamage(0);
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {

	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap constructor(name) called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

void	ScavTrap::operator=(const ScavTrap& obj) {

	(void)obj;
	return ;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void	ScavTrap::setNameScavTrap(std::string name) {

	setName(name);
	return ;
}

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode" << std::endl;
	return ;
}