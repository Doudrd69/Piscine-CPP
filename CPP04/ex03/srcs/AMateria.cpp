#include "../includes/AMateria.hpp"

AMateria::AMateria() {

	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) {

	std::cout << "AMateria constructor(string) called" << std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria(const AMateria& obj) {

	std::cout << "AMateria copy constructor called" << std::endl;
	this->_type = obj.getType();
	*this = obj;
	return ;
}

AMateria&	AMateria::operator=(const AMateria& obj) {

	this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria() {

	std::cout << "AMateria default destructor called" << std::endl;
	return ;
}

const std::string&	AMateria::getType(void) const {

	return (this->_type);
}

void	AMateria::use(ICharacter& target) {

	(void)target;
	return ;
}