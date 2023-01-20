#include <iostream>
#include "../includes/Fixed.hpp"

int	main( void ) {

	Fixed a;		//on cree un objet "a" --> appel du constructeur par defaut
	Fixed b( a );	//on appelle le constructeur de recopie (on donne l'objet a)
	Fixed c;		//on cree un objet "c" --> appel du constructeur par defaut

	c = b;			//grace a la surcharge d'ope --> c = b
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}