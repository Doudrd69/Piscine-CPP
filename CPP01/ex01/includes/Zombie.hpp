#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	public :

		Zombie();
		~Zombie();

		void	setName(std::string str);
		void	setIndex(int i);
		int		getIndex(void);

		void announce(void);
		Zombie* zombieHorde( int N, std::string name );

	private :

		std::string		name;
		int				index;
};

#endif