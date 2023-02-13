#include "../includes/Brain.hpp"

Brain::Brain() {

	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& obj) {

	for (int i = 0; i < 100; i++) {
		this->ideas[i] = obj.ideas[i];
	}
	return ;
}

Brain&	Brain::operator=(const Brain& obj) {

	for (int i = 0; i < 100; i++) {
		this->ideas[i] = obj.ideas[i];
	};
	return (*this);
}

Brain::~Brain() {

	std::cout << "Brain destructor called" << std::endl;
	return ;
}