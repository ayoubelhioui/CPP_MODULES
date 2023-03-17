# include "RPN.hpp"
RPN::RPN() { }

RPN::RPN(const RPN &oldObj) {
    *this = oldObj;
}

RPN &RPN::operator=(const RPN &oldObj) {
    this->st = oldObj.st;
    return *this;
}

RPN::~RPN() { }
