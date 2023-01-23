#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

// #define MAKE_INT_FIXED(x) ((x) << FRACT_BITS)
// #define MAKE_FLOAT_FIXED(x) ((int_fixed)((x) * FIXED_POINT_ONE))
// #define MAKE_FIXED_INT(x) ((x) >> FRACT_BITS)
// #define MAKE_FIXED_FLOAT(x) (((float)(x)) / FIXED_POINT_ONE)

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
	//convertir en virgule fixe
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (intValue * (1 << this->_bits));
	this->_fixedValue = this->_fixedValue / (1 << _bits);
	return ;
}

Fixed::Fixed(const float floatValue)
{
	//convertir en virgule fixe
	std::cout << "Float constructor called";
	std::cout << " -- convert : " << floatValue << std::endl;
	this->_fixedValue = floatValue * (1 << _bits);
	this->_fixedValue = this->_fixedValue / (1 << _bits);
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
	out << obj._fixedValue << '.' << std::endl;
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
	return ((double)_fixedValue / (double)(1 << _bits));
}

int	Fixed::toInt(void) const
{
	return 0;
}