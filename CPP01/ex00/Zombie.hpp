#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	public :

		Zombie();
		~Zombie();

		void	setName(std::string str);

		void announce(void);
		void randomChump(std::string name);
		Zombie* newZombie(std::string name);

	private :

		std::string	name;
};

#endif