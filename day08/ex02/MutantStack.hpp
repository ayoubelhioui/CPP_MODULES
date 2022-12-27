#ifndef _MUTANT_STACK_HPP_
#define _MUTANT_STACK_HPP_
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
public :
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){};
	MutantStack(const MutantStack &oldObj){ *this = oldObj; };
	MutantStack &operator =(const MutantStack &oldObj){ (void)oldObj; return *this; };
	~MutantStack(){};
    iterator dequeBegin () { return std::stack<T>::c.begin(); };
    iterator dequeEnd () { return std::stack<T>::c.end(); };
};
#endif