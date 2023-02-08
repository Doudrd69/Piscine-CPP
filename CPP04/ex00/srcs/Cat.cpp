#include "../includes/Cat.hpp"

Cat::Cat() {

	std::cout << "Cat default constructor called" <<std::endl;
	setType("Cat");
	return ;
}

Cat::Cat(const Cat& obj) : Animal(obj) {

	*this = obj;
	return ;
}

Cat&	Cat::operator=(const Cat& obj) {

	setType(obj.getType());
	return *this;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const {

	std::cout << "Miaou" << std::endl;
	return ;
}