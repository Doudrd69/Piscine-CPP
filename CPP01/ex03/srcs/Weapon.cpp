#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->setType(str);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(std::string value)
{
	this->type = value;
	return ;
}

std::string&	Weapon::getType(void)
{
	return (this->type);
}