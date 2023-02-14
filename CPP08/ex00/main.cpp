#include "EasyFind.hpp"

int main() {

    std::vector<int> myCont;

    myCont.push_back(2);
    myCont.push_back(5);
    myCont.push_back(42);
    myCont.push_back(6);
    myCont.push_back(78);
    myCont.push_back(23);

    // for (int i = 0; i < 6; i++)
    //     std::cout << myCont[i] << std::endl;

    std::vector<int>::const_iterator result = easyfind(myCont, 23);
    if (result != myCont.end())
        std::cout << "Value found : " << *result << std::endl;
    else
        std::cout << "Value not found : " << *result << std::endl;

    return 0;
}