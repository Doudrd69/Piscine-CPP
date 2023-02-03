#include "../includes/ICharacter.hpp"

ICharacter::ICharacter() {

	std::cout << "ICharacter default constructor called" << std::endl;
	return ;
}

ICharacter::ICharacter(std::string name) {

	std::cout << "ICharacter constructor(string) called" << std::endl;
	this->_name = name;
	return ;
}

ICharacter::ICharacter(const ICharacter& obj) {

	*this = obj;
	return ;
}

ICharacter&	ICharacter::operator=(const ICharacter& obj) {

	this->_name = obj.getName();
	return (*this);
}

const std::string&	ICharacter::getName() const {

	return (this->_name);
}

void	ICharacter::equip(AMateria* m) {

	if (this->_inventory_index < 4)
	{
		this->_inventory[this->_inventory_index] = m;
		this->_inventory_index++;
		return ;
	}

	delete m;

	return ;
	//si on a deja equipe 4 materia et qu'on en ajoute une de plus
	//ou qu'on veut equip une materie qui existe pas
	//il faut juste la detruire et rien faire
}

void	ICharacter::unequip(int idx) {

	std::cout << "Unequip Materia " << idx << std::endl;
	delete (this->_inventory[idx]);
	return ;
}

void	ICharacter::use(int idx, ICharacter& target) {

	this->_inventory[idx]->use(target);
	return ;
}

// ICharacter::~ICharacter() {

// 	std::cout << "ICharacter default destructor called" << std::endl;
// 	return ;
// }