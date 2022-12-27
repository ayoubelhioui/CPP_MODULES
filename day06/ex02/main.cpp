#include "Base.hpp"
#include "unistd.h"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include "ClassA.hpp"

class base{
protected :
    int a;
    int b;
public :
	base() : a(10), b(-10){
    std::cout << "BASE" << std::endl;
};
    base(int a1, int b1) : a(a1), b(b1){};
};

class derived : public base{
private :
    int c;
public :
	derived()  : base(5,9), c(10){
    std::cout << "DERIVED" << std::endl;
};
};
int main()
{
    derived d;
}

