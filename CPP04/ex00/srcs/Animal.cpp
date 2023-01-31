#include "../includes/Animal.hpp"

Animal::Animal() {

	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal& obj) {

	*this = obj;
	return ;
}

Animal&	Animal::operator=(const Animal& obj) {

	this->_type = obj._type;
	return (*this);
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const {

	std::cout << "ndqwndisn (What is this animal?)" << std::endl;
	return ;
}

void	Animal::setType(std::string value) {

	this->_type = value;
	return ;
}

const std::string&	Animal::getType(void) const {

	return (this->_type);
}