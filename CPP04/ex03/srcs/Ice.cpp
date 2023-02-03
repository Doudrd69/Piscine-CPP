#include "../includes/Ice.hpp"

Ice::Ice() {

	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice& obj) : AMateria(obj) {

	*this = obj;
	return ;
}

Ice&	Ice::operator=(const Ice& obj) {

	this->_type = obj.getType();
	return (*this);
}

Ice::~Ice() {

	std::cout << "Default Ice destructor called" << std::endl;
	return ;
}

Ice*	Ice::clone() const {

	return (new Ice());
}

void	Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}