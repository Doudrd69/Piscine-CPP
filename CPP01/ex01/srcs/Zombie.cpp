#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie killed" << std::endl;
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

void	Zombie::setIndex(int i)
{
	this->index = i;
	return ;
}

int	Zombie::getIndex(void)
{
	return (this->index);
}