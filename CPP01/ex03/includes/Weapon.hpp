#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

	public :

		Weapon(const std::string& str);
		~Weapon();

		void				setType(const std::string& value);
		const std::string&	getType(void);


	private :

		std::string		type;
};

#endif