#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

/*********************************************************/
/*                    CONSTRUCTOR                        */
/*********************************************************/

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = intValue << _bits;
	return ;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called";
	//std::cout << " -- value = " << floatValue << " / _bits = " << _bits;
	_fixedValue = roundf(floatValue * (1 << _bits));
	//std::cout << " -- after conversion : " << _fixedValue << std::endl;
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

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return ;
}

/*********************************************************/
/*                       FUNCTIONS                       */
/*********************************************************/

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (float)_fixedValue / (float)(1 << _bits);
}

int	Fixed::toInt(void) const
{
	return _fixedValue >> _bits;
}