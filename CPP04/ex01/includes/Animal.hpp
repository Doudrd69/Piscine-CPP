#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	public :

		Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual ~Animal();

		virtual void	makeSound(void) const;

		void	setType(std::string value);
		const std::string&	getType(void) const;

		private :

			std::string	_type;
};

#endif