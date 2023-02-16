#include "MutantStack.hpp"

int main()
{
    MutantStack<int> _mStack;

    _mStack.push(5);
    _mStack.push(17);

    std::cout << _mStack.top() << std::endl;

    _mStack.pop();

    std::cout << _mStack.size() << std::endl;

    _mStack.push(3);
    _mStack.push(5);
    _mStack.push(737);

    //[...]

    _mStack.push(0);

    // MutantStack<int>::iterator start = _mStack.begin();
    // MutantStack<int>::iterator end = _mStack.end();

    // ++start;
    // --end;

    // while (start != end)
    // {
    //     std::cout << *start << std::endl;
    //     ++start;
    // }

    // std::stack<int> s(_mStack);
    
    return 0;
}