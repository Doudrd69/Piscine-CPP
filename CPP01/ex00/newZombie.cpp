#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;

	Zombie::setName(name);
	Zombie::announce();
	return (zombie);
}