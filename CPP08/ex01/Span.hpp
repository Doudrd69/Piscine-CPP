#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span {

    public :

        class SameValueDetected : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Span() {};
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span() {};

        void    addNumber(int value);
        void    addLotofNumbers(unsigned int number);
        int     shortestSpan();
        int     longestSpan();
    
    private :

        std::vector<unsigned int>    _cont;
};

#endif