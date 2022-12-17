#include "Form.hpp"

int main()
{
    try{
        Bureaucrat b("hello world", 100);
        Form f(100, "Ayoub's Form", 150);
//        f.beSigned(b);
        std::cout << f.getIsSigned() << std::endl;
//        b.signForm(f);
//        std::cout << f << std::endl;
//        Bureaucrat b("ayoub", 3);
//        f.beSigned(b);
////        b.signForm(f);
////        std::cout << f.getGradeToSign() << std::endl;
//        std::cout << f << std::endl;
////        b.signForm(f);
////        b.decrementGrade();
////        std::cout << b.getGrade() << std::endl;
    }
    catch (std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
}