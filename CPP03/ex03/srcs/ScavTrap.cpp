#include "../includes/ScavTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	return ;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap constructor(name) called" << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "SCAVTRAP values : " << this->_name << this->_HitPoints << this->_EnergyPoints << this->_AttackDamage << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
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

	std::cout << "ScavTrap entered Gate Keeper mode" << std::endl;
	return ;
}