#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public :

		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& obj);
		void	operator=(const DiamondTrap& obj);
		~DiamondTrap();

		void		setNameDiamondTrap(std::string name);
		std::string	getNameDiamondTrap();
		void		whoAmI();

		private :

			std::string	_name;
};

#endif