#include "Span.hpp"

int main()
{
    try {
        int a[20];
        for (int i = 0; i < 20; i++)
            a[i] = -1;
        Span sp = Span(1020);
        for (int i = 0; i < 1000; i++)
            sp.addNumber(i);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.addManyNumbers(a, 20);
        sp.addNumber(-100);
        sp.displaySpan();
//        sp.addNumber(100);
    }
    catch(const char *e){
        std::cout << e << std::endl;
    }
}