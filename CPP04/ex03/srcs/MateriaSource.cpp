#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {

    std::cout << "MateriaSource default constructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {

    for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
    }
    this->_index = obj._index;
    
    for (int i = 0; i < 4; i++) {
		if (obj._inventory[i] != NULL)
			this->_inventory[i] = obj._inventory[i];
	}
    return ;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& obj) {

    for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
    }

    this->_index = obj._index;
    
    for (int i = 0; i < 4; i++) {
		if (obj._inventory[i] != NULL)
			this->_inventory[i] = obj._inventory[i];
	}
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m) {

    for (int i = 0; i < 4; i++) {

        if (this->_inventory[i] == NULL) {
            std::cout << "-- Materia successfully learned -- " << i << std::endl;
            this->_inventory[i] = m;
            return ;
        }
    }
    std::cout << "/!\\ Materia inventory is full /!\\" << std::endl;
    delete m;
    return ;
}

AMateria*   MateriaSource::createMateria(const std::string& type) {

    int j = this->_index + 1;
    if (j >= 2)
    {
        for (int k = j; k < 4; k++) {
            if (this->_inventory[k]->getType() == type) {
                std::cout << "-- Materia successfully created --" << std::endl;
                std::cout << "address returned : " << &this->_inventory[k] << std::endl;
                this->_index = k;
                return (this->_inventory[k]);
            }
        }
    }
    else
    {
        for (int i = 0; i < 4; i++) {

            if (this->_inventory[i]->getType() == type) {
                std::cout << "-- Materia successfully created --" << std::endl;
                std::cout << "address returned : " << &this->_inventory[i] << std::endl;
                this->_index = i;
                return (this->_inventory[i]);
            }
        }
    }
    std::cout << "-- Unknown Materia type --" << std::endl;
    return (0);
}