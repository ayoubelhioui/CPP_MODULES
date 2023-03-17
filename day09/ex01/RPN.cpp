# include "RPN.hpp"
RPN::RPN( void ) { }

RPN::RPN(const RPN &oldObj) {
    *this = oldObj;
}


RPN &RPN::operator=(const RPN &oldObj) {
    this->_dataHolder = oldObj._dataHolder;
    return *this;
}

RPN::~RPN() { }

void RPN::pushNumber(int enteredNumber) {
    this->_dataHolder.push(enteredNumber);
}

void RPN::performOperation( char *_operator) {
    int first = 0, second = 0;
    if (this->_dataHolder.size() == 0 || this->_dataHolder.size() == 1)
        throw (std::runtime_error("Stack must contains 2 numbers at least."));
    first = this->_dataHolder.top();
    this->_dataHolder.pop();
    second = this->_dataHolder.top();
    this->_dataHolder.pop();
    if (!strcmp(_operator, "*"))
        this->_dataHolder.push(first * second);
    else if (!strcmp(_operator, "+"))
        this->_dataHolder.push(first + second);
    else if (!strcmp(_operator, "-"))
        this->_dataHolder.push(first - second);
    else if (!strcmp(_operator, "/"))
    {
        if (second == 0)
            throw (std::runtime_error("Cannot Divide a number by 0"));
        this->_dataHolder.push(first / second);
    }
}
