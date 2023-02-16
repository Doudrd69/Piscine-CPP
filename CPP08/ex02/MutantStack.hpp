#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

template<typename T, typename Container = std::vector<T> >
class MutantStack {

    public :
    
        using iterator = typename Container::iterator;

        MutantStack(): _cntr() {};
        MutantStack(const MutantStack& obj) {

            this->_cntr = obj._cntr;
            return ;
        };

        bool    empty() { return _cntr.empty(); };
        int     size() { return _cntr.size(); };
        void    push(const T& value) { _cntr.push_back(value); };
        T&      top() { return _cntr.top(); };
        void    pop() { _cntr.pop_back(); };

        iterator begin() { return _cntr.begin(); };
        iterator end() { return _cntr.end(); };

    private :

        Container _cntr;
};

//(reference objects with similar properties to pointers)

#endif