#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zonz;

	zonz = zombie.newZombie("Obi-Wan");
	zombie.setName("Qui Gon");
	zombie.randomChump("Anakin");
	zonz->announce();
	zombie.announce();
	delete(zonz);
	return 0;
}
