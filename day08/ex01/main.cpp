#include "Span.hpp"

int main()
{
    try {
        Span sp1 = Span(1);
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp1 = sp;
//        sp.addNumber(9);
//        std::cout << sp.shortestSpan() << std::endl;
//        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char *e){
        std::cout << e << std::endl;
    }
}