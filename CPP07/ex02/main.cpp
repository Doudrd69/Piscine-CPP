#include "Array.hpp"

#define MAX_VAL 5


template<typename T>
void    swap(T& a, T& b) {

    T tmp;

    tmp = a;
    a = b;
    b = tmp;

    return ;
}

template<typename T>
void    iter(T* tab, int size, void (*func)(T&, T&)) {

    for (int i = 1; i < size; i++) {
        (*func)(tab[i - 1], tab[i]);
    }
    return ;
}

template <typename T>
std::ostream&   operator<<(std::ostream& out, const Array<T>& obj) {

    for (unsigned int i = 0; i < MAX_VAL; i++)
       out << obj.getValue(i) << " - ";
    return out;
}

int main(void) {


    std::string strValues[] = {"anakin", "kit fisto", "palpatine", "qui-gon", "jar-jar"};
    Array<std::string> strArray(MAX_VAL);
    if (!strArray.getArray())
        return 1;

    for (unsigned int i = 0; i < MAX_VAL; i++)
        strArray[i] = strValues[i];

    std::cout << strArray << std::endl;

    Array<std::string> tmp = strArray;
    if (!tmp.getArray())
        return 1;

    std::cout << tmp << std::endl;

    iter(tmp.getArray(), MAX_VAL, swap);

    std::cout << "\n== after iter ==" << std::endl;
    std::cout << "strArray : "<< strArray << std::endl;
    std::cout << "tmp      : " << tmp << std::endl;

    try
    {
        strArray[-1] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << "First catch : index out of bound : index < min_index of array: " << e.what() << '\n';
    }

    try
    {
        strArray[MAX_VAL] = "";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Second catch : index out of bound : index > max_index of array: " << e.what() << '\n';
    }
    
}

// int main(void)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];

//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand() % 42;
//         std::cout << value << " - ";
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     std::cout << "\n" << numbers << std::endl;

//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         std::cout << "TMP --> " << tmp << std::endl;
//         Array<int> test(tmp);
//         std::cout << "TEST --> " << test << std::endl;
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
//         std::cerr << "First catch : index out of bound : index < min_index of array: " << e.what() << '\n';
//     }

//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << "Second catch : index out of bound : index > max_index of array: " << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand() % 42;
//     }

//     std::cout << "\n" << numbers << std::endl;

//     delete [] mirror;
//     return 0;
// }