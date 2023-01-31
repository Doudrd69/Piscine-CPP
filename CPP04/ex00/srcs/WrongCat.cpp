#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "WrongCat default constructor called" <<std::endl;
	setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat& obj) {

	*this = obj;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj) {

	setType(obj.getType());
	return *this;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const {

	std::cout << "MiaWaf (this is the wrong cat)" << std::endl;
	return ;
}