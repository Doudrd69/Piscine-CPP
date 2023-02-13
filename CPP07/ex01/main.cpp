#include "Iter.hpp"

int main() {

	int         array_int[4] = {2, 42, 5, 28};
    // std::string array_string[4] = {"Obi-Wan", "Anakin", "Master Windu", "Master Fisto"};

	// int a = 98;
	// int b = 67;
	// swap<int>(b, a);
	// std::cout << a << " / " << b << std::endl;

	std::cout << "\n== Before ITER ==" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << array_int[i] << " - ";
    }

	// for (int i = 0; i < 4; i++) {
    //     std::cout << array_string[i] << " - ";
    // }

	iter(array_int, 4, swap);

	std::cout << "\n== After ITER ==" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << array_int[i] << " - ";
    }

	// for (int i = 0; i < 4; i++) {
    //     std::cout << array_string[i] << " - ";
    // }

	std::cout << std::endl;
    return 0;
}