#include "Span.hpp"

Span::Span(unsigned int N) {

    std::cout << "== Reserve " << N << " space for int_container ==" << std::endl;
    this->_cont.reserve(N);
}

Span::Span(const Span& obj) {
    
    this->_cont = obj._cont;
    return ;
}

Span& Span::operator=(const Span& obj) {

    this->_cont = obj._cont;
    return *this;
}

void    Span::addNumber(int value) {

    if (std::find(this->_cont.begin(), this->_cont.end(), value) != 0)
        this->_cont.push_back(value);
    return ;
}

int Span::shortestSpan() {

    int min_span = __INT_MAX__;
    int tmp;

    std::vector<unsigned int>::const_iterator start = this->_cont.begin();
    std::vector<unsigned int>::const_iterator end = this->_cont.end();

    for (std::vector<unsigned int>::const_iterator it1 = start; it1 != end; it1++)
    {
        if (tmp < min_span)
            min_span = tmp;
        for (std::vector<unsigned int>::const_iterator it2 = start + 1; it2 != end; it2++)
            tmp = abs(*it2 - *it1);
    }
    return min_span;
}

int Span::longestSpan() {

    int max = *std::max_element(this->_cont.begin(), this->_cont.end());
    int min = *std::min_element(this->_cont.begin(), this->_cont.end());
    int max_range = max - min;
    return max_range;
}