#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;
class Character : public ICharacter {

	public:

		Character();
		Character(std::string name);
		Character(const Character& obj);
		Character&	operator=(const Character& obj);
		~Character();

		virtual std::string const & getName() const;
		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);

		virtual void	deleteTab();

	private :

		std::string	_name;
		AMateria*	_inventory[4];
		int			_inventory_index;
};

#endif