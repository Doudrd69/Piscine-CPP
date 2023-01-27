#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {

	public :

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		void	operator=(const ScavTrap& obj);
		~ScavTrap();

		void	setNameScavTrap(std::string name);
		void	guardGate();
};

#endif