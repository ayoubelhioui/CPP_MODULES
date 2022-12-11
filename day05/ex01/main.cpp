#include "Form.hpp"


int main()
{
    Form f("HelloWorld", false, 4, 0);
    Bureaucrat b("ayoub", 4);
    std::cout << f.getGradeToSign() << std::endl;
    f.beSigned(b);
    std::cout << f << std::endl;
//    b.signForm(f);
//    Bureaucrat b("HelloWorld", 170);
//    Bureaucrat c("nothing to say", 1);
//    std::cout << c.getGrade() << std::endl;
//    c.incrementGrade();
//    std::cout << c.getGrade() << std::endl;
//    std::cout << b.getGrade() << std::endl;
//    b.decrementGrade();
//    std::cout << b.getGrade() << std::endl;
//    std::cout << b  << " " << c << std::endl;
}