#include "Bureaucrat.hpp"

#include<iostream>
using namespace std;


class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x)
	{
	}
};

class B : public A
{
public:
	B(int x) try : m_x(x) // note addition of try keyword here
	{
		if (x <= 0) // moved this from A to B
			throw 1; // and this too
	}
	catch (...)
	{
                std::cerr << "Exception caught\n";

                // If an exception isn't explicitly thrown here, the current exception will be implicitly rethrown
	}
};

int main()
{
	try
	{
		B b(0);
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}
//int main()
//{
//    try{
//        test t(-10);
//    }
//    catch(const char *a){
//        std::cout << "error occurred " << a<<  std::endl;
//    }
////    try{
////        Bureaucrat b("HelloWorld", 150);
//////        Bureaucrat c("i don't know", 1);
////        b.decrementGrade();
////    }
////    catch(std::exception &e){
////        std::cout << e.what() << std::endl;
////    }
////    std::cout << c.getGrade() << std::endl;
////    c.incrementGrade();
////    std::cout << c.getGrade() << std::endl;
////    std::cout << b.getGrade() << std::endl;
////    b.decrementGrade();
////    std::cout << b.getGrade() << std::endl;
////    std::cout << b  << std::endl;
////    std::cout << c << std::endl;
//}