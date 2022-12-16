#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){};

PresidentialPardonForm::PresidentialPardonForm(std::string _enteredTarget) : Form(PRESIDENT_GRADE_TO_SIGN, "President", PRESIDENT_GRADE_TO_EXECUTE, _enteredTarget) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oldObj) { *this = oldObj; }

PresidentialPardonForm &PresidentialPardonForm::operator =(const PresidentialPardonForm &oldObj){
    this->_target = oldObj._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const{
    Form::execute(bureaucrat);
    std::cout << this->_target << " has been pardoned by Zaphood Beeblebrox" << std::endl;
}