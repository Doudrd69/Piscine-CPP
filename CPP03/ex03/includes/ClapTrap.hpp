#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	public :

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap& obj);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		const std::string&	getName(void) const;
		void		setName(std::string name);
		void		setHitPoints(const int value);
		void		setEnergyPoints(int value);
		void		setAttackDamage(int value);

	protected :

		std::string	_name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
};

#endif