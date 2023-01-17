#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), mWeapon(nullptr) {}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	mWeapon = &weapon;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << mWeapon->getType() << std::endl;
	return ;
}