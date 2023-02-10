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
    std::cout << "INDEX ==> " << j << std::endl;
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
//ici je retourne pas le bon pointeur, donc apres je free un truc vide
//[0] -> ice
//[1] -> cure   
//[2] -> cure