#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

    public :

        Span() {};
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span() {};

        void    addNumber(int value);
        int     shortestSpan();
        int     longestSpan();
    
    private :

        std::vector<unsigned int>    _cont;
};

#endif