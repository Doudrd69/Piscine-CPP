#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point {

	public :

		Point();
		Point(const float nb1, const float nb2);
		Point(const Point& obj);
		~Point();

		const Point&	operator=(const Point& obj);

		const Fixed&		getX(void) const;
		const Fixed&		getY(void) const;

	private :

		const Fixed	_x;
		const Fixed	_y;
};

#endif