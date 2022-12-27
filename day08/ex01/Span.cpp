#include "Span.hpp"

Span::Span() : spanSize(0), container(std::vector<int>(0)), currentIndex(0){};

Span::Span(unsigned int enteredSize) : spanSize(enteredSize), container(std::vector<int>(spanSize)), currentIndex(0){};

Span::Span(const Span &oldObj){ *this = oldObj; };

Span &Span::operator=(const Span &oldObj) {
    this->currentIndex = oldObj.currentIndex;
    this->spanSize = oldObj.spanSize;
    this->container = oldObj.container;
    return (*this);
};

void Span::addNumber(int enteredValue){
    if (currentIndex == spanSize)
        throw (OUT_OF_BOUND_MSG);
    container[currentIndex++] = enteredValue;
};

int Span::shortestSpan(){
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

int Span::longestSpan(){
    if (currentIndex < 2)
        throw (SPAN_MSG);
    if (currentIndex == 2)
        return (abs(container[0] - container[1]));
    return (*std::max_element(begin(container), end(container)) - *std::min_element(begin(container), end(container)));
}

void Span::addManyNumbers(int *a, int size){
    if (currentIndex + size > spanSize)
        throw (OUT_OF_BOUND_MSG);
    this->container.insert(this->container.begin() + currentIndex, a, a + size);
    this->currentIndex += size;

};

void Span::displaySpan() const{
    for (unsigned int i = 0; i < this->spanSize; i++)
        std::cout << container[i] << std::endl;
};
Span::~Span() {};