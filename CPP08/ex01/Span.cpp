#include "Span.hpp"

Span::Span(unsigned int N) {

    std::cout << "== Reserve " << N << " space for int_container ==" << std::endl;
    this->_cont.reserve(N);
}

Span::Span(const Span& obj) : _cont(obj._cont) {
    
    return ;
}

Span& Span::operator=(const Span& obj) {

    this->_cont = obj._cont;
    return *this;
}

const char *Span::SameValueDetected::what() const throw()
{
    return "Error code: 1";
}


void    Span::addNumber(int value) {

    std::vector<unsigned int>::const_iterator ptr;
    ptr = std::find(this->_cont.begin(), this->_cont.end(), value);
    if (ptr != this->_cont.end())
        throw Span::SameValueDetected() ;
    this->_cont.push_back(value);
    return ;
}

void    Span::addLotofNumbers(unsigned int number) {

    std::srand(time(NULL));
    _cont.resize(number);

        for (std::vector<unsigned int>::iterator it = _cont.begin(); it != _cont.end(); ++it)
            *it = std::rand();
}

int Span::shortestSpan() {

    int tmp;
    int check = 0;

    std::vector<unsigned int>::const_iterator start = this->_cont.begin();
    std::vector<unsigned int>::const_iterator end = this->_cont.end();

    for (std::vector<unsigned int>::const_iterator it1 = start; it1 != end; it1++)
    {
        for (std::vector<unsigned int>::const_iterator it2 = start + 1; it2 != end; it2++)
        {
            if (check == 0)
            {
                tmp = abs(*it2 - *it1);
                check = 1;
            }
            if (abs(*it2 - *it1) < tmp && it2 != it1 && check == 1)
                tmp = abs(*it2 - *it1);
        }
    }
    return tmp;
}

int Span::longestSpan() {

    int max = *std::max_element(this->_cont.begin(), this->_cont.end());
    int min = *std::min_element(this->_cont.begin(), this->_cont.end());
    //std::cout << max << "  -  " << min << std::endl;
    int max_range = max - min;
    return max_range;
}