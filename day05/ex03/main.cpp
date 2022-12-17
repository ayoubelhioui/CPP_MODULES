#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
    try{
        Bureaucrat b("ayoub", 115);
        ShrubberyCreationForm f("HelloWorld");
        PresidentialPardonForm p("president");
        RobotomyRequestForm r("fuck");
        r.beSigned(b);
        r.execute(b);
//        f.beSigned(b);
//        b.executeForm(f);
//        p.beSigned(b);
//        p.execute(b);
//        std::cout << p << std::endl;
//        b.signForm(f);
//        f.execute(b);
//        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}