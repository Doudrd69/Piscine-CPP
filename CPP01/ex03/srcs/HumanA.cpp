#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : mName(name),
mWeapon(weapon) {}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->mName << " attacks with their " << mWeapon.getType() << std::endl;
	return ;
}