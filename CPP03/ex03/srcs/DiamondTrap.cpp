#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	setName("Default");
	setHitPoints(0);
	setEnergyPoints(0);
	setAttackDamage(0);
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name),
FragTrap(name) {

	std::cout << "DiamondTrap constructor(name) called : " << name << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->_name = name;
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::getEnergyPoints();
	this->_AttackDamage = FragTrap::getAttackDamage();
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {

	this->_name = obj._name;
	return *this;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI() {

	//setName("Master Windu_clap_name");
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
	std::cout << "My real name  : " << this->_name << std::endl;
	return ;
}