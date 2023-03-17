#ifndef _RPN_HPP_
#define _RPN_HPP_

# include <iostream>
# include <stack>
class RPN{
private :
    std::stack<int> st;
public :
	RPN();
	RPN(const RPN &oldObj);
	RPN &operator =(const RPN &oldObj);
	~RPN();
};
#endif