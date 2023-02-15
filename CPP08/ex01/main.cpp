#include "Span.hpp"

int main() {

    try
    {
        unsigned int n = 10000;

        Span sp = Span(n);

        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);

        sp.addLotofNumbers(n);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        return 0;
    }
    catch(Span::SameValueDetected &e)
    {
        std::cerr << "Error : the container can't have two same values: " << e.what() << '\n';
    }
    
}