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

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	*this = obj;
	return ;
}

Character&	Character::operator=(const Character& obj) {

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}

	this->_name = obj.getName();
	this->_inventory_index = obj._inventory_index;

	for (int i = 0; i < obj._inventory_index; i++) {
		if (obj._inventory[i] != NULL)
			this->_inventory[i] = obj._inventory[i];
	}

	return (*this);
}

Character::~Character() {

	std::cout << "Character destructor called" << std::endl;
	return ;
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

	if (this->_inventory[idx] != NULL)
		std::cout << "-- Unequip Materia " << this->_inventory[idx]->getType() << " --" << std::endl;
	else
		std::cout << "-- Materia does not exist --" << std::endl; 
	return ;
}

void	Character::use(int idx, ICharacter& target) {

	this->_inventory[idx]->use(target);
	return ;
}

void	Character::deleteTab() {

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}