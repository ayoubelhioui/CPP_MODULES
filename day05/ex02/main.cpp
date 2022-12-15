#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try{
        Bureaucrat b("ayoub", 150);
        ShrubberyCreationForm f("test");
        b.signForm(f);
//        f.execute(b);
//        std::cout << f << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}