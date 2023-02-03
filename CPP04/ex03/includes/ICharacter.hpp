#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter {

	public:

		ICharacter();
		ICharacter(std::string name);
		ICharacter(const ICharacter& obj);
		ICharacter&	operator=(const ICharacter& obj);
		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	private :

		std::string	_name;
		AMateria*	_inventory[4];
		int			_inventory_index;
};

#endif