#include <iostream>
#include "EX01.hpp"
//class Base{
//public:
//    int Basedata;
//    Base() : Basedata(11){};
//    virtual void Do(){
//         std::cout << "Base::Do() : " << Basedata << std::endl;
//     }
//};
//class Derived : Base{
//public:
//    int derivecdata;
//    Derived() : derivecdata(22){};
//    void Do(){
//        std::cout << "Derived::Do() : " << derivecdata << std::endl;
//    }
//};

//class Int{
//private :
//		int value;
//public :
//	Int(int x) : value(x){
//    std::cout << "here the value is " << value <<  std::endl;
//};
//};

int main()
{
    Data d;
    std::cout << &d << std::endl;

    std::cout << deserialize(serialize(&d)) << std::endl;
//    Derived d1;
//    Base *b = static_cast<Base*>(&d1);
//    (void)b;
//    const int a1 = 10;
//    const int *b1 = &a1;
//    int *d1 = const_cast<int*>(b1);
//    *d1 = 15;
//    std::cout << a1 << std::endl;
//    std::cout << *d1 << std::endl;
//    std::cout << &a1 << std::endl;
//    std::cout << d1 << std::endl;
//    test(const_cast<int*>(b1));
//    int* p = new int(65);
//    char* ch = reinterpret_cast<char*>(p);
//    std::cout << *p << std::endl;
//    std::cout << *ch << std::endl;
//    std::cout << p << std::endl;
//    std::cout << ch << std::endl;
//    char c = 'A';
//    int *p = (int *)&c;
//    *p = 5;
//    std::cout << *p << std::endl;
//    int *ip = static_cast<int *>(& c);
//    Int a(30);
//    int x;
//    a = x;

//    try{
//        int a = 45521;
//        char c = static_cast<char>(a);
//        std::cout << c << std::endl;
//    }
//    catch(std::exception &e)
//    {
//        std::cout << e.what() << std::endl;
//    }
//    Base *b = new Base;
//    Derived *d = new Derived;
//
//    static_cast<Base*>(d)->Do();
//    b
//    unsigned int u = 1;
//    if (i > u)
//    std::cout << 7/5 << std::endl;
//    printf("%f\n", (7 / 5));
//    banana *b = new banana();
//    mango *m = new mango();
//    banana *n = reinterpret_cast<banana*>(m);
//    n->eatbanana();
//    obj = 20;`
//    test *t = new test();
//    test1 *t1 = new test1();
//    test *tt = reinterpret_cast<test*>(t1);
//    std::cout << tt->ea << std::endl;
//    float f = 3.5;
//    int a = f;
//    int b = static_cast<int>(f);
//    std::cout << a << std::endl;
//    std::cout << b  << std::endl;
}