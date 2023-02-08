#include "../includes/DiamondTrap.hpp"

/***********************************************/
/*                 CONSTRUCTORS                */
/***********************************************/

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav"), FragTrap(name + "_frag") {

	std::cout << "DiamondTrap constructor(name) called" << std::endl;
	this->_name = name;
   	this->_HitPoints = FragTrap::getHitPoints();;
   	this->_EnergyPoints = ScavTrap::getEnergyPoints();
   	this->_AttackDamage = FragTrap::getAttackDamage();
    // setHitPoints(FragTrap::getHitPoints());
    // setEnergyPoints(ScavTrap::getEnergyPoints());
    // setAttackDamage(FragTrap::getAttackDamage());
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& obj) {

	this->_name = obj.getName();
    setHitPoints(obj.getHitPoints());
    setEnergyPoints(obj.getEnergyPoints());
    setAttackDamage(obj.getAttackDamage());
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