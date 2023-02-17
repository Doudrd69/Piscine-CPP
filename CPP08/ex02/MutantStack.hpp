#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

    public :

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack(): std::stack<T>() {};
        MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}
        MutantStack& operator=(const MutantStack& obj) {
            std::stack<T>::operator=(obj);
            return *this;
        };

        iterator begin() { return this->c.begin(); };
        iterator end() { return this->c.end(); };
};

#endif