#include <iostream>
#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& obj);
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	Point a(1.0, 1.0);
	Point b(5.0, 2.0);
	Point c(2.0, 5.0);
	Point point(3.0, 2.0);
	
	std::cout << "A X : " << a.getX() << " Y : " << a.getY() << std::endl;
	std::cout << "B X : " << b.getX() << " Y : " << b.getY() << std::endl;
	std::cout << "C X : " << c.getX() << " Y : " << c.getY() << std::endl;
	std::cout << "POINT X : " << point.getX() << " Y : " << point.getY() << std::endl;
	
	if (bsp(a, b, c, point) == true)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	
	return 0;
}
