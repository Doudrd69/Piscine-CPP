#include "../includes/DiamondTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {

	std::cout << "DiamondTrap constructor(name) called" << std::endl;
	this->_name = name;
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::getEnergyPoints();
	this->_AttackDamage = FragTrap::getAttackDamage();
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {

	this->_name = obj.getName();
	return *this;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

/***********************************************/
/*                   FUNCTIONS                 */
/***********************************************/

void	DiamondTrap::whoAmI(void) {

	std::cout << "My real name : " << this->_name << std::endl;
	std::cout << "My Clap name : " << ClapTrap::_name << std::endl;
}