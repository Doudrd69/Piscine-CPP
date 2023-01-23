#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public :

		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& other);				//constructeur de recopie
		void operator=(const Fixed& other);		//surcharge de l operateur d affectation
		friend std::ostream& operator<<(std::ostream& out, const Fixed& obj);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private :

		int					_fixedValue;	//valeur en virgule fixe
		static const int	_bits = 8;			//nombre de bits de la partie fractionnaire
};

#endif