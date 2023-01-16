#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = NULL;

	zombie = zombie->zombieHorde(4, "Master Windu");
	std::cout << "I am the first zombie! ";
	zombie->announce();
	delete[] zombie;
	return (0);
}
