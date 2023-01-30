#include "../includes/ClapTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

ClapTrap::ClapTrap() : _HitPoints(0), _EnergyPoints(0), _AttackDamage(0), _name("Default") {

	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _HitPoints(100), _EnergyPoints(50), _AttackDamage(0), _name(name) {

	std::cout << "ClapTrap constructor(name) called : " << name << std::endl;
	std::cout << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj) {

	this->_name = obj.getName();
	return (*this);
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

const std::string&	ClapTrap::getName(void) const {

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

