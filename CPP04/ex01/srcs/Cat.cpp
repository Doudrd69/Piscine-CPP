#include "../includes/Cat.hpp"

Cat::Cat() {

	std::cout << "Cat default constructor called" <<std::endl;
	this->brain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	CatBrain->ideas[i] = "Miaaouu";
	setType("Cat");
	return ;
}

Cat::Cat(const Cat& obj) : Animal(obj) {

	std::cout << "Copy Construct" << std::endl;
	setType(obj.getType());
	this->brain = new Brain(*obj.brain);
	return ;
}

Cat&	Cat::operator=(const Cat& obj) {

	if (this != &obj) {

		setType(obj.getType());
		delete this->brain;
		this->brain = new Brain();
	}
	std::cout << "= overload" << std::endl;
	return *this;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
	delete (this->brain);
	return ;
}

void	Cat::makeSound(void) const {

	std::cout << "Miaou" << std::endl;
	return ;
}