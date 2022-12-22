//#include "Base.hpp"
//#include "unistd.h"
//#include "ClassB.hpp"
//#include "ClassC.hpp"
//#include "ClassA.hpp"
//int main()
//{
//    Base *d = generate();
//    if (dynamic_cast<ClassB*>(d))
//        std::cout << "here 1" << std::endl;
//    *d = static_cast<ClassB*>(d);
////    ClassB *b = static_cast<ClassB*>(d);
////    identify(generate());
////    sleep(1);
////    identify(*generate());
//    return 0;
//}

#include <iostream>
using namespace std;

class b {
public:
    virtual void p(){
        std::cout << "heere" << std::endl;
    }
    int a;
};
class Derived : public b{
public:
    Derived(){
        a = -10;
    }
};
int main()
{
    b *d1 = new b();
    d1->a = -100;
//    b* b1 = (b*)(&d1); // allowed
    Derived* b2 = static_cast<Derived*>(d1);
    std::cout << b2->a << std::endl;
    b2->a = 6;
    return 0;
}