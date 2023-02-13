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

	std::cout << "Copy Construct" << std::endl;
	setType(obj.getType());
	this->brain = new Brain(*obj.brain);
	return ;
}

Dog&	Dog::operator=(const Dog& obj) {

	if (this != &obj) {

		setType(obj.getType());
		delete this->brain;
		this->brain = new Brain();
	}
	std::cout << "= overload" << std::endl;
	return *this;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

// Dog*	Dog::f() {

// 	new Dog();
// 	return (this);
// }

void	Dog::makeSound(void) const {

	std::cout << "Waf Waf" << std::endl;
	return ;
}