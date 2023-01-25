#include "../includes/Point.hpp"

float	triangleArea(Point const *p1, Point const *p2, Point const *p3)
{
	float i = 0.0f;
	i = (p1->getX() * (p2->getY() - p3->getY()) + p2->getX() * (p3->getY() - p1->getY()) + p3->getX() * (p1->getY() - p2->getY()));
	return (i / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	float	A;
	float	B;
	float	C;
	float	area;
	float	total;

	area = triangleArea(&a, &b, &c);
	A = abs(triangleArea(&point, &b, &c));
	B = abs(triangleArea(&point, &a, &c));
	C = abs(triangleArea(&point, &a, &b));

	std::cout << "\nArea TOTAL : " << area << std::endl;
	std::cout << "\nArea A : " << A << std::endl;
	std::cout << "\nArea B : " << B << std::endl;
	std::cout << "\nArea C : " << C << std::endl;

	total = A + B + C;
	std::cout << "\nArea A+B+C : " << total << std::endl;

	if (total > area)
		return false;
	else
		return true;
}