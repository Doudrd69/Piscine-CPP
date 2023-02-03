#include "../includes/Cure.hpp"

Cure::Cure() {

	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure& obj) : AMateria(obj) {

	*this = obj;
	return ;
}

Cure&	Cure::operator=(const Cure& obj) {

	this->_type = obj.getType();
	return (*this);
}

Cure::~Cure() {

	std::cout << "Default Cure destructor called" << std::endl;
	return ;
}

Cure*	Cure::clone() const {

	return (new Cure());
}

void	Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}