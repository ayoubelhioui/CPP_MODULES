#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    try{
        Bureaucrat b("ayoub", 2);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        rrf->beSigned(b);
        rrf->execute(b);
        delete rrf;
    }
    catch (std::runtime_error &e){
        std::cout << e.what() << std::endl;
    }
}