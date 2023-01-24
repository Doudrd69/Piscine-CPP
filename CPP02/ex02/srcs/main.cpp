#include <iostream>
#include "../includes/Fixed.hpp"

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

// int main( void ) {

// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int	main(void) {

	Fixed const a( 1234.4321f );
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed e( 42 );
	Fixed f( a );

	std::cout << "VALUES to be tested :\n" << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "---------------------\n" << std::endl;

	std::cout << "COMPARISON OPERATORS :\n" << std::endl;

	if (c > b)
		std::cout << "TRUE : c > b --> " << c << " > " << b << std::endl;
	else
		std::cout << "FALSE : c < b --> " << c << " < " << b << std::endl;

	if (c < a)
		std::cout << "TRUE : c < a --> " << c << " < " << a << std::endl;
	else
		std::cout << "FALSE : c > a --> " << c << " > " << a << std::endl;

	if (b >= d)
		std::cout << "TRUE : b >= d --> " << b << " >= " << d << std::endl;
	else
		std::cout << "FALSE : b < d --> " << b << " < " << d << std::endl;

	if (b <= c)
		std::cout << "TRUE : b <= c --> " << b << " <= " << c << std::endl;
	else
		std::cout << "FALSE : b > c --> " << b << " > " << c << std::endl;

	if (b == d)
		std::cout << "TRUE : b == d --> " << b << " == " << d << std::endl;
	else
		std::cout << "FALSE : b != d --> " << b << " != " << d << std::endl;

	if (a != c)
		std::cout << "TRUE : a != c --> " << a << " != " << c << std::endl;
	else
		std::cout << "FALSE : a == c --> " << a << " == " << c << std::endl;

	std::cout << "---------------------\n" << std::endl;

	std::cout << "ARITHMETIC OPERATORS :\n" << std::endl;

	std::cout << a << " + " << b  << " = " << a + b << std::endl;
	
	std::cout << a << " - " << b  << " = " << a - b << std::endl;

	std::cout << b << " * " << c  << " = " << b * c << std::endl;

	std::cout << c << " / " << b  << " = " << c / b << std::endl;

	std::cout << "---------------------\n" << std::endl;

	std::cout << "OTHER OPERATORS :\n" << std::endl;

	std::cout << "Before ++e : " << e << std::endl;
	std::cout << "After  ++e : " << ++e << std::endl;
	std::cout << "Before e++ : " << e << std::endl;
	std::cout << "-->    e++ : " << e++ << std::endl;
	std::cout << "After  e++ : " << e << std::endl;

	std::cout << "\nBefore --e : " << e << std::endl;
	std::cout << "After  --e : " << --e << std::endl;
	std::cout << "Before e-- : " << e << std::endl;
	std::cout << "-->    e-- : " << e-- << std::endl;
	std::cout << "After  e-- : " << e << std::endl;

	std::cout << "---------------------\n" << std::endl;

	std::cout << " COMPARISON FUNCTIONS :\n" << std::endl;

	std::cout << "Minimum between " << f << " and " << e << " ==> " << Fixed::min(f, e) << std::endl;
	std::cout << "Minimum between " << b << " and " << c << " ==> " << Fixed::min(b, c) << std::endl;
	
	std::cout << "Maximum between " << f << " and " << e << " ==> " << Fixed::max(f, e) << std::endl;
	std::cout << "Maximum between " << b << " and " << c << " ==> " << Fixed::max(b, c) << std::endl;

	std::cout << "---------------------\n" << std::endl;
}