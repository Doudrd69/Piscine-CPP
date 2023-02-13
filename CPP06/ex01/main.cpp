#include "Data.hpp"
#include <iostream>

unsigned long serialize(Data* ptr) {

    return (reinterpret_cast<unsigned long >(ptr));
}

Data* deserialize(unsigned long raw) {

    return (reinterpret_cast<Data*>(raw));
}

int main() {

    Data data(5, 42.42);

    unsigned long    seri = serialize(&data);
    Data*       deseri = deserialize(seri);

    if (deseri == &data)
    {
        std::cout << "deseri : " << deseri << std::endl;
        std::cout << "seri   : " << &data << std::endl;
    }
    else
        std::cout << "Addresses are different" << std::endl;
    return 0;
}