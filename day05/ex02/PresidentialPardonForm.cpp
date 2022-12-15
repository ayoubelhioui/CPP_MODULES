#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target){
        this->setGradeToSign(GRADE_TO_SIGN);
        this->setGradeToExecute(GRADE_TO_EXECUTE);
        std::cout << "PresidentialPardonForm Parametrized Constructor Called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oldObj) {
    std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
    *this = oldObj;
}

PresidentialPardonForm &PresidentialPardonForm::operator =(const PresidentialPardonForm &oldObj){
    std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
    setGradeToExecute(oldObj.getGradeToExecute());
    setGradeToSign(oldObj.getGradeToSign());
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat){
    if (getGradeToExecute() > bureaucrat.getGrade())
//        throw GradeTooLowExcept
    if (!getIsSigned())
        throw CouldntExecuteExcept(COULDNT_EXECUTE_FORM);
    std::cout << this->_target << "  has been pardoned by Zaphood Beeblebrox" << std::endl;
}
