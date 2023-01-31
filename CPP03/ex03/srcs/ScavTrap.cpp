#include "../includes/ScavTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	this->_name = "default";
	return ;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap constructor(name) called" << std::endl;
	this->_HitPoints = 150;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 25;
	this->_name = name;
	std::cout << "ScavTrap EP --> " << this->_EnergyPoints << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj) {

	this->_name = obj.getName();
	return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

/***********************************************/
/*                   FUNCTIONS                 */
/***********************************************/

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode" << std::endl;
	return ;
}