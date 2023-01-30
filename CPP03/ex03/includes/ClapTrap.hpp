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

		int					getHitPoints(void);
		int					getEnergyPoints(void);
		int					getAttackDamage(void);
		const std::string&	getName(void) const;
		void				setName(std::string name);
		void				setHitPoints(int value);
		void				setEnergyPoints(int value);
		void				setAttackDamage(int value);

	protected :

		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
		std::string	_name;
};

#endif