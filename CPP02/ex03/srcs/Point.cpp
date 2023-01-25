#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point& obj) : _x(obj._x), _y(obj._y) {}

Point::~Point() {}

Point::Point(const float nb1, const float nb2) : _x(nb1), _y(nb2) {}

const Point&	Point::operator=(const Point& obj) {

	(void)obj;
	return *this;
}

const Fixed&	Point::getX(void) const {

	return (this->_x);
}

const Fixed&	Point::getY(void) const {

	return (this->_y);
}