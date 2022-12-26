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
	Span() : currentIndex(0){};
    Span(unsigned int enteredSize) : spanSize(enteredSize), container(std::vector<int>(spanSize)), currentIndex(0){
    };
	Span(const Span &oldObj){
        *this = oldObj;
    };
	Span &operator =(const Span &oldObj){
        currentIndex = oldObj.currentIndex;
        spanSize = oldObj.spanSize;
        container = oldObj.container;
        for (unsigned int i = 0; i < container.size(); i++)
            std::cout << this->container[i] << std::endl;
        return (*this);
    };
    void addNumber(int enteredValue){
        if (currentIndex == spanSize)
            throw (OUT_OF_BOUND_MSG);
        container[currentIndex++] = enteredValue;
    };
    int shortestSpan(){
        if (currentIndex < 2)
            throw (SPAN_MSG);
        int _min = abs(container[0] - container[1]);
        if (currentIndex == 2)
            return (_min);
        std::sort(begin(container), end(container));
        for (unsigned int i = 0; i < spanSize - 1; i++)
            _min = std::min(abs(container[i] - container[i + 1]), _min);
        return (_min);
    }
    int longestSpan(){
        if (currentIndex < 2)
            throw (SPAN_MSG);
        if (currentIndex == 2)
            return (abs(container[0] - container[1]));
        return (*std::max_element(begin(container), end(container)) - *std::min_element(begin(container), end(container)));

    }
//    void addManyNumbers(){};
	~Span(){};
};
#endif