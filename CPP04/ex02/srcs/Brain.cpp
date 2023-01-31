#include "../includes/Brain.hpp"

Brain::Brain() {

	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& obj) {

	*this = obj;
	return ;
}

Brain&	Brain::operator=(const Brain& obj) {

	(void)obj;
	return (*this);
}

Brain::~Brain() {

	std::cout << "Brain destructor called" << std::endl;
	return ;
}