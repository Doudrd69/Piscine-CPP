#include "../includes/ClapTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

ClapTrap::ClapTrap() : _HitPoints(0), _EnergyPoints(0), _AttackDamage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {

	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ClapTrap constructor(name) called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& obj) : _HitPoints(obj._HitPoints),
_EnergyPoints(obj._EnergyPoints), _AttackDamage(obj._AttackDamage),
_name(obj._name) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	return ;
}

void	ClapTrap::operator=(const ClapTrap& obj) {

	(void)obj;
	return ;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

/***********************************************/
/*                   FUNCTIONS                 */
/***********************************************/

void	ClapTrap::attack(const std::string& target) {

	if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
	{
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not enough energy to attack!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	this->_HitPoints = this->_HitPoints - amount;
	if (this->_HitPoints <= 0)
	{
		this->_HitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " has no more hit points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage!" << std::endl;
 	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_HitPoints > 0)
	{
		this->_HitPoints += amount;
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_name << " healed and took " << amount << " more HP!" << std::endl;
		return ;
	}
}


/***********************************************/
/*                   ACCESSORS                 */
/***********************************************/

int	ClapTrap::getHitPoints(void) {

	return (this->_HitPoints);
}

int	ClapTrap::getEnergyPoints(void) {

	return (this->_EnergyPoints);
}

int	ClapTrap::getAttackDamage(void) {

	return (this->_AttackDamage);
}

std::string	ClapTrap::getName(void) {

	return (this->_name);
}

void	ClapTrap::setName(std::string name) {

	this->_name = name;
	return ;
}

void	ClapTrap::setHitPoints(int value) {

	this->_HitPoints = value;
	return ;
}

void	ClapTrap::setEnergyPoints(int value) {

	this->_EnergyPoints = value;
	return ;
}

void	ClapTrap::setAttackDamage(int value) {

	this->_AttackDamage = value;
	return ;
}
