#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {

    std::cout << "MateriaSource default constructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {

    *this = obj;
    return ;
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& obj) {

    (void)obj;
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m) {

    for (int i = 0; i < 4; i++) {

        if (this->_inventory[i] == 0) {
            this->_inventory[i] = m->clone();
            break;
        }
    }
    return ;
}

AMateria*   MateriaSource::createMateria(const std::string& type) {

    for (int i = 0; i < 4; i++) {

        if (this->_inventory[i]->getType() == type)
            return (this->_inventory[i]);
    }
    std::cout << "Unknown Materia type" << std::endl;
    return (0);
}