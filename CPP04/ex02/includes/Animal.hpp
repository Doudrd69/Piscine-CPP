#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	public :

		Animal();
		Animal(const Animal& obj);
		const Animal& operator=(const Animal& obj) const;
		virtual ~Animal();

		virtual Animal*	f() = 0;
		virtual void	makeSound(void) const;

		void	setType(std::string value);
		const std::string&	getType(void) const;

		private :

			std::string	_type;
};

#endif