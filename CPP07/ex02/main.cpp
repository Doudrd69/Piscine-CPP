#include "Array.hpp"

#define MAX_VAL 5

template <typename T>
std::ostream&   operator<<(std::ostream& out, const Array<T>& obj) {

    for (unsigned int i = 0; i < MAX_VAL; i++)
       out << obj.getValue(i) << " - ";
    return out;
}

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 42;
        std::cout << value << " - ";
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "\n" << numbers << std::endl;

    //SCOPE
    {
        Array<int> tmp = numbers;
        std::cout << "TMP --> " << tmp << std::endl;
        Array<int> test(tmp);
        std::cout << "TEST --> " << test << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "First catch : index out of bound : index < min_index of array: " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Second catch : index out of bound : index > max_index of array: " << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}