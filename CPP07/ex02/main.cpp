#include "Array.hpp"

int main() {

	unsigned int	size = 4;

	/****************** INT ARRAY *******************/
	try
	{
		int 			intvalues[] = {45, 68, 69, 42};

		Array<int> intArray(size);

		for (unsigned int i = 0; i < size; i++)
			intArray[i] = intvalues[i];

		for (unsigned int i = 0; i < size; i++)
			std::cout << intArray.getValue(i) << " - ";
		std::cout << std::endl;
		//std::cout << "Array size : " << size() << std::endl;

		std::cout << std::endl;
	}
	catch(Array<int>::InvalidIndex &e)
	{
		std::cerr << "\n/!\\ Invalid index : " << e.what() << '\n';
	}
	

	/****************** STRING ARRAY *******************/
	// try
	// {
	// 	std::string 	strvalues[] = {"anakin", "obi-wan", "palpatine", "qui-gon"};

	// 	Array<std::string> stringArray(size);

	// 	for (unsigned int i = 0; i < size; i++)
	// 		stringArray[i] = strvalues[i];

	// 	for (unsigned int i = 0; i < size; i++)
	// 		std::cout << stringArray[i] << " - ";
	// 	std::cout << std::endl;
	// 	std::cout << "Array size : " << size() << std::endl;
	// }
	// catch(Array<std::string>::InvalidIndex &e)
	// {
	// 	std::cerr << "\n/!\\ Invalid index : " << e.what() << '\n';
	// }
	

	return 0;
}

// #define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];

//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }