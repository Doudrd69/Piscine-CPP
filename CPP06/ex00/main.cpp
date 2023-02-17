#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <climits>

bool	my_isprint(int value) {

	if (value >= 32 && value <= 126)
		return true;
	else
		return false;
}

bool	check_isnan_isinf(double value) {

	if (std::isnan(value) == true || std::isinf(value) == true)
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "Float: "  << value << std::endl;
		return true;
	}
	return false;
}

int main(int argc, char **argv) {

    if (argc == 2)
    {
		char	*end;
		std::string	tmp = argv[1];
		int	tmp_length = tmp.length();

		/******************** INTEGER ********************/
		long int	i_input = std::strtol(argv[1], &end, 10);
		if (i_input > 2147483647  || i_input < -2147483648)
		{
			std::cout << "Value is out of INT range" << std::endl;
			return 1;
		}
		if (*end == 0) {

			std::cout << "==> Integer : " << i_input << std::endl;
			if (my_isprint(i_input) == true)
				std::cout << "Char: '" << static_cast<char>(i_input) << "'" << std::endl;
			else
				std::cout << "Char: non displayable" << std::endl;
			std::cout << "Int: " << i_input << std::endl;
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(i_input) << "f" << std::endl;
			std::cout << "Double: " << static_cast<double>(i_input) << std::endl;
			return 0;
		}

		/******************** FLOAT ********************/
		float	f_input = std::strtof(argv[1], &end);
		if (f_input > HUGE_VAL)
		{
			std::cout << "Value out of FLOAT range" << std::endl;
			return 1;
		}
		int length = end - argv[1];
		if ((length == tmp_length - 1) && *end == 'f' && *(end + 1) == '\0') {

			if (check_isnan_isinf(f_input) == true)
				return 1;
			std::cout << "==> Float : " << f_input << std::endl;
			if (my_isprint(f_input))
				std::cout << "Char: '" << static_cast<char>(f_input) << "'" << std::endl;
			else
				std::cout << "Char: non displayable" << std::endl;
			std::cout << "Int: " << static_cast<int>(f_input) << std::endl;
			std::cout << "Float: " << std::fixed << std::setprecision(1) << f_input << "f" << std::endl;
			std::cout << "Double: " << static_cast<double>(f_input) << std::endl;
			return 0;
		}

		/******************** DOUBLE ********************/
		double	d_input = std::strtod(argv[1], &end);
		if (d_input > HUGE_VAL)
		{
			std::cout << "Value is out of DOUBLE range" << std::endl;
			return 1;
		}
		if (*end == 0) {

			if (check_isnan_isinf(d_input) == true)
				return 1;
			std::cout << "==> Double : " << d_input << std::endl;
			if (my_isprint(d_input))
				std::cout << "Char: '" << static_cast<char>(d_input) << "'" << std::endl;
			else
				std::cout << "Char: non displayable" << std::endl;
			std::cout << "Int: " << static_cast<int>(d_input) << std::endl;
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(d_input) << "f" << std::endl;
			std::cout << "Double: " << d_input << std::endl;
			return 0;
		}

		/******************** CHAR ********************/
		if (argv[1][0] && !argv[1][1]) {

			std::cout << "==> Char : " << argv[1] << std::endl;
			std::cout << "Char: '" << argv[1][0] << "'" << std::endl;
			std::cout << "Int: " << static_cast<int>(argv[1][0]) << std::endl;
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(argv[1][0]) << "f" << std::endl;
			std::cout << "Double: " << static_cast<double>(argv[1][0]) << std::endl;
			return 0;
		}

        std::cout << "Argument should be a scalar type !";
        std::cout << " --> char / int / float / double" << std::endl;
        return 1;
    }
    std::cout << "Error : wrong number of arguments : only one is requested" << std::endl;
    return 1;
}