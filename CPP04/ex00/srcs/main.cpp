#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main() {

	// const WrongAnimal* meta = new WrongAnimal();
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	// const WrongAnimal* Wrongcat = new WrongCat();

	std::cout << dog->getType() << " is telling something : ";
	dog->makeSound();
	// std::cout << Wrongcat->getType() << " is telling something : ";
	// Wrongcat->makeSound();
	std::cout << cat->getType() << " is telling something : ";
	cat->makeSound();

	meta->makeSound();

	delete(meta);
	delete(dog);
	// delete(Wrongcat);
	delete(cat);

	return 0;
}
