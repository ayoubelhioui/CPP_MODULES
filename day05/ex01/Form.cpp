#include "Form.hpp"

Form::GradeTooHighExcept::GradeTooHighExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::GradeTooLowExcept::GradeTooLowExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::Form() : _isSigned(false), _gradeToSign(150), _formName("default"), _gradeToExecute(150){}

Form::Form(int _gradeToSign, std::string _formName, int _gradeToExecute) : _isSigned(false), _gradeToSign(gradeChecking(_gradeToSign)), _formName(_formName), _gradeToExecute(gradeChecking(_gradeToExecute)){}

Form &Form::operator=(const Form &oldObj) {
    this->_isSigned = oldObj._isSigned;
    return (*this);
}

int Form::gradeChecking(int enteredValue){
    if (enteredValue > HIGHEST_VALUE)
        throw GradeTooHighExcept(HIGH_GRADE_MSG);
    if (enteredValue < LOWEST_VALUE)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
    return (enteredValue);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
    this->_isSigned = true;
}

int Form::getGradeToExecute() const{ return (this->_gradeToExecute); }

int Form::getGradeToSign() const{ return (this->_gradeToSign); }

bool Form::getIsSigned() const { return (this->_isSigned); };

std::string Form::getFormName() const { return (this->_formName); }

std::ostream &operator << (std::ostream &out, const Form &form){
    out << form.getFormName() << " is " << (!form.getIsSigned() ? "not " : "");
    out << "signed, and the required grade to sign it is :" << form.getGradeToSign();
    out << " , and the required grade to execute it is : " << form.getGradeToExecute();
    return (out);
}

Form::~Form(){}
