#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("HelloWorld", 150);
        Bureaucrat c("i don't know", 10);
        b.incrementGrade();
        b.decrementGrade();
        std::cout << b  << std::endl;
    }
    catch(std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
}