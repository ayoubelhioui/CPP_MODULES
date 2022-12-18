#include "Intern.hpp"

Intern::FormNotExist::FormNotExist(std::string _errorMsg) : std::runtime_error(_errorMsg){ }

Intern::Intern() { }

Intern::Intern(const Intern &oldObj) { (void)oldObj; }

Intern &Intern::operator=(const Intern &oldObj) { (void) oldObj; return (*this); }

Intern::~Intern() { }

Form *Intern::robotomyForm(const std::string &_formTarget){
    return (new RobotomyRequestForm(_formTarget));
};

Form *Intern::PresidentialForm(const std::string &_formTarget){
    return (new PresidentialPardonForm(_formTarget));
};

Form *Intern::ShrubberyForm(const std::string &_formTarget){
    return (new ShrubberyCreationForm(_formTarget));
};

Form *Intern::makeForm(std::string formName, std::string formTarget){
    memFn ptr = {&Intern::robotomyForm, &Intern::PresidentialForm, &Intern::ShrubberyForm};
    std::string formsName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int formIndex = ((formName == formsName[0]) * 0 + (formName == formsName[1]) * 1 + (formName == formsName[2]) * 2);
    if (formIndex == 0 and formName != formsName[0])
        throw FormNotExist(FORM_NOT_EXIST_MSG);
    std::cout << "Intern creates " << formName << std::endl;
    return (this->*ptr[formIndex])(formTarget);
};