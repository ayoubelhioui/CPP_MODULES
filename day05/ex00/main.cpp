#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("HelloWorld", 150);
        Bureaucrat c("i don't know", 1);
        b.decrementGrade();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
//    std::cout << c.getGrade() << std::endl;
//    c.incrementGrade();
//    std::cout << c.getGrade() << std::endl;
//    std::cout << b.getGrade() << std::endl;
//    b.decrementGrade();
//    std::cout << b.getGrade() << std::endl;
//    std::cout << b  << std::endl;
//    std::cout << c << std::endl;
}