#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template<typename T>
class MutantStack : std::stack<T> {

    public :

        MutantStack();
        MutantStack(const MutantStack& obj);
        MutantStack& operator=(const MutantStack& obj);
        ~MutantStack();

        struct Iterator
        {
            using iterator_category = std::forward_iterator_tag;
            using difference_type   = std::ptrdiff_t;
            using value_type        = T;
            using pointer           = T*;
            using reference         = T&;

            Iterator(pointer ptr) : _ptr(ptr) {} 

            reference	operator*() const { return *_ptr; }
            pointer		operator->() const ( return _ptr; )

    		Iterator&	operator++() { m_ptr++; return *this; }  
    		Iterator	operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

            private :

                _ptr;
        };

        void    push(const T value) {

            std::cout << "push" << std::endl;
        }

        void    top(void) {

            std::cout << "top" << std::endl;
        } 

        void    pop(void) {

            std::cout << "pop" <<std::endl;
        }

        int size(void) {

            std::cout << "size" << std::endl;
        }

        void    begin(void) {

            std::cout << "begin" << std::endl;
        }

        void    end(void) {

            std::cout << "end" << std::endl;
        }

    private :

        std::stack<T> _mStack;
};

#endif