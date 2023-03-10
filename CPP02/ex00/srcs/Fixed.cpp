#include <iostream>
#include "../includes/Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
	return ;
}

Fixed::Fixed(const Fixed& other) {

	std::cout << "Copy constructor called" << std::endl;
	this->_fixedValue = other.getRawBits();
	return ;
}

void	Fixed::operator=(const Fixed& other) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = other.getRawBits();
	return ;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
	return ;
}