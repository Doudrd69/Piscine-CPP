#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main() {

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }

	Animal*	array[4];

	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();

	// delete dog;
	// delete cat;

	for (int i = 0; i < 4; i++) {
		if (i < 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
		array[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete array[i];

	return 0;
}
