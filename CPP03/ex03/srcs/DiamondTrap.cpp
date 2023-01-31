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
	std::cout << "CT values : " << ClapTrap::_name << ClapTrap::_HitPoints << ClapTrap::_EnergyPoints << ClapTrap::_AttackDamage << std::endl;
	std::cout << "ST values : " << ScavTrap::_name << ScavTrap::_HitPoints << ScavTrap::_EnergyPoints << ScavTrap::_AttackDamage << std::endl;
	std::cout << "FT values : " << FragTrap::_name << FragTrap::_HitPoints << FragTrap::_EnergyPoints << FragTrap::_AttackDamage << std::endl;

	this->_name = name;
	this->_HitPoints = FragTrap::getHitPoints();
	this->_EnergyPoints = ScavTrap::getEnergyPoints();
	this->_AttackDamage = FragTrap::getAttackDamage();
	std::cout << "DIAMONDTRAP values : " << this->_name << this->_HitPoints << this->_EnergyPoints << this->_AttackDamage << std::endl;
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
	std::cout << "My Clap name : " << ClapTrap::_name << "\n" << std::endl;
}