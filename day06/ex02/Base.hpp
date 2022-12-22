#ifndef _BASE_HPP_
#define _BASE_HPP_
#include <iostream>

class Base{
public :
	virtual ~Base();
};

Base* generate ();
void identify (Base*);
void identify (Base&);

#endif