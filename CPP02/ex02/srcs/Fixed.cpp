#include <iostream>
#include <cmath>
#include "../includes/Fixed.hpp"

/*********************************************************/
/*                    CONSTRUCTOR                        */
/*********************************************************/

Fixed::Fixed() {

	this->_fixedValue = 0;
	return ;
}

Fixed::Fixed(const int intValue) {

	this->_fixedValue = intValue << _bits;
	return ;
}

Fixed::Fixed(const float floatValue) {

	_fixedValue = roundf(floatValue * (1 << _bits));
	return ;
}

Fixed::Fixed(const Fixed& other) {

	this->_fixedValue = other.getRawBits();
	return ;
}

Fixed::~Fixed() {}

/*********************************************************/
/*                       FUNCTIONS                       */
/*********************************************************/

int	Fixed::getRawBits(void) const {

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

/*********************************************************/
/*                       OPERATORS                       */
/*********************************************************/

void	Fixed::operator=(const Fixed& obj) {

	this->_fixedValue = obj.getRawBits();
	return ;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
}

bool	Fixed::operator>(const Fixed& obj) const {

	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed& obj) const{

	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed& obj) const{

	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed& obj) const{

	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed& obj) const{

	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed& obj) const{

	return (this->getRawBits() != obj.getRawBits());
}

float	Fixed::operator+(const Fixed& obj) const {

	return (this->toFloat() + obj.toFloat());
}

float	Fixed::operator-(const Fixed& obj) const {

	return (this->toFloat() - obj.toFloat());
}

float	Fixed::operator*(const Fixed& obj) const {

	return (this->toFloat() * obj.toFloat());
}

float	Fixed::operator/(const Fixed& obj) const {

	return (this->toFloat() / obj.toFloat());
}

Fixed&	Fixed::operator++() {

	++this->_fixedValue;
	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed tmp = *this;
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {

	--this->_fixedValue;
	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed tmp = *this;
	operator--();
	return tmp;
}

float	Fixed::min(Fixed& nb1, Fixed& nb2) {

	if (nb1._fixedValue < nb2._fixedValue)
		return (nb1.toFloat());
	else
		return (nb2.toFloat());
}

float	Fixed::min(const Fixed& nb1, const Fixed& nb2) {

	if (nb1._fixedValue < nb2._fixedValue)
		return (nb1.toFloat());
	else
		return (nb2.toFloat());
}

float	Fixed::max(Fixed& nb1, Fixed& nb2) {

	if (nb1._fixedValue > nb2._fixedValue)
		return (nb1.toFloat());
	else
		return (nb2.toFloat());
}

float	Fixed::max(const Fixed& nb1, const Fixed& nb2) {

	if (nb1._fixedValue > nb2._fixedValue)
		return (nb1.toFloat());
	else
		return (nb2.toFloat());
}