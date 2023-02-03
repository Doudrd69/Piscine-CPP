#include "../includes/Character.hpp"

Character::Character() {

	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(std::string name) {

	std::cout << "ICharacter constructor(string) called" << std::endl;
	this->_name = name;
	return ;
}

Character::Character(const Character& obj) {

	*this = obj;
	return ;
}

Character&	Character::operator=(const Character& obj) {

	this->_name = obj.getName();
	return (*this);
}

const std::string&	Character::getName() const {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	if (this->_inventory_index < 4)
	{
		std::cout << "==> " << this->_name << " equip materia " << m->getType() << std::endl;
		this->_inventory[this->_inventory_index] = m;
		this->_inventory_index++;
		return ;
	}
	std::cout << this->_name << "'s inventory is full and let the Materia on the ground" << std::endl;
    delete m;
	return ;
}

void	Character::unequip(int idx) {

	std::cout << "-- Unequip Materia " << this->_inventory[idx]->getType() << " --" << std::endl;
	delete (this->_inventory[idx]);
	return ;
}

void	Character::use(int idx, ICharacter& target) {

	this->_inventory[idx]->use(target);
	return ;
}