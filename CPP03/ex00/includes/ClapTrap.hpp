#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	public :

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		void	operator=(const ClapTrap& obj);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int			getHitPoints(void);
		int			getEnergyPoints(void);
		int			getAttackDamage(void);
		std::string	getName(void);
		void		setHitPoints(int value);
		void		setEnergyPoints(int value);
		void		setAttackDamage(int value);

	private :

		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
		std::string	_name;
};

#endif