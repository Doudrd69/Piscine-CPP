#include "Span.hpp"

Span::Span(unsigned int N) {

    if (N <= 1)
        throw Span::InvalidContainerSize();
    std::cout << "== Container initialized with size " << N << std::endl;
    this->_cont.reserve(N);
    return ;
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

const char *Span::InvalidContainerSize::what() const throw()
{
    return "Error code: 2";
}


void    Span::addNumber(unsigned int value) {

    std::vector<unsigned int>::const_iterator ptrSameValue;

    ptrSameValue = std::find(this->_cont.begin(), this->_cont.end(), value);
    if (ptrSameValue != this->_cont.end())
        throw Span::SameValueDetected();
    this->_cont.push_back(value);
    return ;
}

void    Span::addLotofNumbers(unsigned int n) {

    std::srand(time(NULL));
    this->_cont.resize(n);

    for (std::vector<unsigned int>::iterator it = this->_cont.begin(); it != this->_cont.end(); it++)
        *it = std::rand();
}

long int Span::shortestSpan() {

    int tmp = 0;
    int check = 0;

    std::vector<unsigned int>::const_iterator start = this->_cont.begin();
    std::vector<unsigned int>::const_iterator end = this->_cont.end();

    if (start == end || start + 1 == end)
        throw Span::InvalidContainerSize();

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

long int Span::longestSpan() {

    int max = *std::max_element(this->_cont.begin(), this->_cont.end());
    int min = *std::min_element(this->_cont.begin(), this->_cont.end());
    if (max == min)
        throw Span::InvalidContainerSize();
    int max_range = max - min;
    return max_range;
}