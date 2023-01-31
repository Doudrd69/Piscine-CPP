#include "../includes/Cat.hpp"

Cat::Cat() {

	std::cout << "Cat default constructor called" <<std::endl;
	this->brain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	CatBrain->ideas[i] = "Miaaouu";
	setType("Cat");
	return ;
}

Cat::Cat(const Cat& obj) {

	*this = obj;
	return ;
}

Cat&	Cat::operator=(const Cat& obj) {

	setType(obj.getType());
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