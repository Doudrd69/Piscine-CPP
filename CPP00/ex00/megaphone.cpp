#include <iostream>

int	main(int argc, char *argv[])
{
	int	i, j, length;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			length = strlen(argv[i]);
			for (j = 0; j < length; j++)
				std::cout << (char)(toupper(argv[i][j]));
			std::cout << ' ';
		}
		std::cout << std::endl;
		return 0;
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}