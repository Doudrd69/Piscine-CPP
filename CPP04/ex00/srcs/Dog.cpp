#include "../includes/Dog.hpp"

Dog::Dog() {

	std::cout << "Dog default constructor called" <<std::endl;
	setType("Dog");
	return ;
}

Dog::Dog(const Dog& obj) : Animal(obj) {

	setType(obj.getType());
	return ;
}

Dog&	Dog::operator=(const Dog& obj) {

	setType(obj.getType());
	return *this;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const {

	std::cout << "Waf Waf" << std::endl;
	return ;
}