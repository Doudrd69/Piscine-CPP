#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

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

#endif