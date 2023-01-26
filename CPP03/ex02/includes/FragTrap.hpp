#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

	public :

		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		void	operator=(const FragTrap& obj);
		~FragTrap();

		void	setNameFragTrap(std::string name);
		void	highFiveGuys();
};

#endif