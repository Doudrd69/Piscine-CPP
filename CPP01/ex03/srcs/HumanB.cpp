#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon.getType();
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
	return ;
}