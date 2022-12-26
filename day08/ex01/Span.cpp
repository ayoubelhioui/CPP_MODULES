#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int enteredSize) : spanSize(enteredSize){};

Span::Span(const Span &oldObj) : spanSize(oldObj.spanSize){}

Span &Span::operator=(const Span &oldObj) {
    this->spanSize = oldObj.spanSize;
    return *this;
};

Span::~Span() {};