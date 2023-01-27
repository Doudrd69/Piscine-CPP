#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	setHitPoints(0);
	setEnergyPoints(0);
	setAttackDamage(0);
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name),
FragTrap(name) {

	setNameDiamondTrap(name);
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::getEnergyPoints();
	this->_AttackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap constructor(name) called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
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

void	DiamondTrap::setNameDiamondTrap(std::string name) {

	this->_name = name;
	return ;
}

std::string	DiamondTrap::getNameDiamondTrap(void) {

	return this->_name;
}

void	DiamondTrap::whoAmI() {

	std::cout << "My real name : " << this->_name << std::endl;
	std::cout << "Clap name    : " << ClapTrap::_name << std::endl;
	return ;
}