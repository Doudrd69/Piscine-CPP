#include "../includes/Dog.hpp"

Dog::Dog() {

	std::cout << "Dog default constructor called" <<std::endl;
	this->brain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	this->brain.ideas[i] = "Waaaf";
	setType("Dog");
	return ;
}

Dog::Dog(const Dog& obj) : Animal(obj) {

	*this = obj;
	return ;
}

Dog&	Dog::operator=(const Dog& obj) {

	setType(obj.getType());
	return *this;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog*	Dog::f() {

	new Dog();
	return (this);
}

void	Dog::makeSound(void) const {

	std::cout << "Waf Waf" << std::endl;
	return ;
}