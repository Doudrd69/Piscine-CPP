#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string& str)
{
	this->setType(str);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

void	Weapon::setType(const std::string& value)
{
	this->type = value;
	return ;
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}