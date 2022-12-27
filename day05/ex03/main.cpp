#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Bureaucrat b("ayoub", 2);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        rrf->beSigned(b);
        rrf->execute(b);
        std::cout << rrf->getFormName() << std::endl;
        delete rrf;
    }
    catch (std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
}