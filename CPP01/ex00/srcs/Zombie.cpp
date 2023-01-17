#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " was killed" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string str)
{
	Zombie::name = str;
	return ;
}