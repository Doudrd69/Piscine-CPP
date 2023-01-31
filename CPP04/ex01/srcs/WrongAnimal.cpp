#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {

	*this = obj;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj) {

	this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "eijfwodje (this is the WrongAnimal)" << std::endl;
	return ;
}

void	WrongAnimal::setType(std::string value) {

	this->_type = value;
	return ;
}

const std::string&	WrongAnimal::getType(void) const {

	return (this->_type);
}