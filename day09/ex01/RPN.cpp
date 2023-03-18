# include "RPN.hpp"

RPN::RPN( void ) { }

RPN::RPN(const RPN &oldObj) { *this = oldObj; }


RPN &RPN::operator=(const RPN &oldObj) {
    this->dataHolder = oldObj.dataHolder;
    return *this;
}

RPN::~RPN() { }

void RPN::performOperation( std::string &_operator) {
    int first = 0, second = 0;
    if (this->dataHolder.size() == 0 || this->dataHolder.size() == 1)
        throw (std::runtime_error("Stack must contains 2 numbers at least."));
    first = this->dataHolder.top();
    this->dataHolder.pop();
    second = this->dataHolder.top();
    this->dataHolder.pop();
    if (_operator ==  PLUS)
        this->dataHolder.push(second + first);
    else if (_operator == MULTIPLY)
        this->dataHolder.push(second * first);
    else if (_operator == MINUS)
        this->dataHolder.push(second - first);
    else if (_operator ==  DIVIDE)
    {
        if (second == 0)
            throw (std::runtime_error("Cannot Divide a number by 0"));
        this->dataHolder.push(second / first);
    }
}
