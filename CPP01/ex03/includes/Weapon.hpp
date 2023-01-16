#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	public :

		Weapon(std::string str);
		~Weapon();

		void			setType(std::string value);
		std::string&	getType(void);

	private :

		std::string		type;
};

#endif