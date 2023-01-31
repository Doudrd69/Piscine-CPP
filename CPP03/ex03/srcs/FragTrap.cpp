#include "../includes/FragTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

FragTrap::FragTrap() {

	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 0;
	this->_EnergyPoints = 0;
	this->_AttackDamage = 0;
	return ;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap constructor(name) called" << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FRAGTRAP values : " << this->_name << this->_HitPoints << this->_EnergyPoints << this->_AttackDamage << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
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

void	FragTrap::highFiveGuys(void) {

	std::cout << "FragTrap wants a high five! come on guys!" << std::endl;
	return ;
}