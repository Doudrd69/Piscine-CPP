#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

int main() {

	const AMateria* ice = new Ice();
	const AMateria* cure = new Cure();

	std::cout << "ice object type ==> " << ice->getType() << std::endl;
	std::cout << "cure object type ==> " << cure->getType() << std::endl;

	// delete ice;
	// delete cure;

	return 0;
}