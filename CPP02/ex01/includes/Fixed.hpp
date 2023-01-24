#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public :

		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& other);
		void operator=(const Fixed& other);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		float				toFloat( void ) const;
		int					toInt( void ) const;

	private :

		int					_fixedValue;
		static const int	_bits = 8;
};

#endif