#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target) : Form(target){
        this->setGradeToSign(GRADE_TO_SIGN);
        this->setGradeToExecute(GRADE_TO_EXECUTE);
        std::cout << "RobotomyRequestForm Parametrized Constructor Called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldObj) {
    std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
    *this = oldObj;
}

RobotomyRequestForm &RobotomyRequestForm ::operator =(const RobotomyRequestForm &oldObj){
    std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
    setGradeToExecute(oldObj.getGradeToExecute());
    setGradeToSign(oldObj.getGradeToSign());
    return (*this);
}

//void Form::execute(const Bureaucrat &bureaucrat){
//    if (!this->_isSigned || this->_gradeToExecute > bureaucrat.getGrade())
//        throw CouldntExecuteExcept(COULDNT_EXECUTE_FORM);
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}