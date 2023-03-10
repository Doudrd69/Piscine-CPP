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
	
	std::cout << "Point A coordinates --> x[ " << a.getX() << " ] y[ " << a.getY() << " ]" << std::endl;
	std::cout << "Point B coordinates --> x[ " << b.getX() << " ] y[ " << b.getY() << " ]" << std::endl;
	std::cout << "Point C coordinates --> x[ " << c.getX() << " ] y[ " << c.getY() << " ]" << std::endl;
	std::cout << "Point coordinates   --> x[ " << point.getX() << " ] y[ " << point.getY() << " ]" << std::endl;
	
	if (bsp(a, b, c, point) == true)
		std::cout << "\nPoint is inside the triangle!" << std::endl;
	else
		std::cout << "\n /!\\Point is not inside the triangle /!\\" << std::endl;
	
	return 0;
}
