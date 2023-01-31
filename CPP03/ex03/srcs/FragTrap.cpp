#include "../includes/FragTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

FragTrap::FragTrap() {

	std::cout << "FragTrap default constructor called" << std::endl;
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	this->_name = "default";
	return ;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap constructor(name) called" << std::endl;
	this->_HitPoints = 1000;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	this->_name = name;
	return ;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj) {

	this->_name = obj.getName();
	return *this;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

/***********************************************/
/*                   FUNCTIONS                 */
/***********************************************/

void	FragTrap::highFiveGuys() {

	std::cout << "PLease guys, let's stop, i want a high five! Come on!" << std::endl;
	return ;
}