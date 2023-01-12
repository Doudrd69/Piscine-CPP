#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zonz;

	zonz = zombie.newZombie("Obi-Wan");
	zombie.setName("Qui Gon");
	zombie.announce();
	delete(zonz);
	return 0;
}

//Un zombie = une classe crée