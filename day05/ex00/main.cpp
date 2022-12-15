#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("HelloWorld", 150);
        Bureaucrat c("i don't know", 10);
        b.decrementGrade();
        std::cout << c.getGrade() << std::endl;
//        c.incrementGrade();
//        std::cout << c.getGrade() << std::endl;
//        std::cout << b.getGrade() << std::endl;
//        b.decrementGrade();
//        std::cout << b.getGrade() << std::endl;
        std::cout << c << std::endl;
        std::cout << b  << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}