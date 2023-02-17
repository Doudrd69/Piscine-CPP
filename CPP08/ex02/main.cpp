#include "MutantStack.hpp"

int main()
{
    MutantStack<int> _mStack;

    _mStack.push(5);
    _mStack.push(17);

    std::cout << "==> before pop : " << _mStack.top() << std::endl;
    _mStack.pop();
    std::cout << "==> after pop : " << _mStack.top() << std::endl;
    std::cout << "Stack size is : " << _mStack.size() << std::endl;
    std::cout << std::endl;


    _mStack.push(3);
    _mStack.push(5);
    _mStack.push(737);

    std::cout << "==> New stack size : " << _mStack.size() << std::endl;
    std::cout << "==> Element at top top : " << _mStack.top() << std::endl;
    std::cout << std::endl;

    _mStack.push(0);

    MutantStack<int>::iterator start = _mStack.begin();
    MutantStack<int>::iterator end = _mStack.end();

    ++start;
    --end;

    while (start != end)
    {
        std::cout << *start << " - ";
        ++start;
    }
    std::cout << std::endl;
    
    std::stack<int> s(_mStack);
    
    return 0;
}

// int main()
// {
//     std::list<int> _mStack;

//     _mStack.push_back(5);
//     _mStack.push_back(17);

//     std::cout << "==> before pop : " << _mStack.back() << std::endl;
//     _mStack.pop_back();
//     std::cout << "==> after pop : " << _mStack.back() << std::endl;
//     std::cout << "Stack size is : " << _mStack.size() << std::endl;
//     std::cout << std::endl;


//     _mStack.push_back(3);
//     _mStack.push_back(5);
//     _mStack.push_back(737);

//     std::cout << "==> New stack size : " << _mStack.size() << std::endl;
//     std::cout << "==> Element at top : " << _mStack.back() << std::endl;
//     std::cout << std::endl;

//     _mStack.push_back(0);

//     std::list<int>::iterator start = _mStack.begin();
//     std::list<int>::iterator end = _mStack.end();

//     ++start;
//     --end;

//     while (start != end)
//     {
//         std::cout << *start << " - ";
//         ++start;
//     }
//     std::cout << std::endl;

//     std::list<int> s(_mStack);
    
//     return 0;
// }