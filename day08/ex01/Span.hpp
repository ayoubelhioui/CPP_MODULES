#ifndef _SPAN_HPP_
#define _SPAN_HPP_
#include <iostream>
#include <vector>
#include <array>
#define OUT_OF_BOUND_MSG "Container is already full"
#define SPAN_MSG "Container contains less than 2 elements"
class Span{
private :
    unsigned int spanSize;
    std::vector<int> container;
    unsigned int currentIndex;
public :
	Span();
    Span(unsigned int enteredSize);
	Span(const Span &oldObj);
	Span &operator =(const Span &oldObj);
    void addNumber(int enteredValue);
    int shortestSpan();
    int longestSpan();
    void addManyNumbers(int *a, int size);
    void displaySpan() const;
	~Span();
};
#endif