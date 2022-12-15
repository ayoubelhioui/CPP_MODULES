#include "Form.hpp"

int main()
{
    try{
        Form f("HelloWorld", false, 4, 0);
        Bureaucrat b("ayoub", 3);
        f.beSigned(b);
        b.signForm(f);
//        std::cout << f.getGradeToSign() << std::endl;
        std::cout << f << std::endl;
//        b.signForm(f);
//        b.decrementGrade();
//        std::cout << b.getGrade() << std::endl;
    }
    catch (std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
}