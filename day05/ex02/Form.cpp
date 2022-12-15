#include "Form.hpp"

Form::GradeTooHighExcept::GradeTooHighExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::CouldntExecuteExcept::CouldntExecuteExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::GradeTooLowExcept::GradeTooLowExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::NotSignedYetException::NotSignedYetException(const std::string &errorMessage) : std::runtime_error(errorMessage){}

Form::Form() : _isSigned(false), _gradeToSign(150), _formName("default"), _gradeToExecute(150){}

Form::Form(bool _isSigned, int _gradeToSign, std::string _formName, int _gradeToExecute, std::string _enteredTarget) : _isSigned(_isSigned), _gradeToSign(_gradeToSign), _formName(_formName), _gradeToExecute(_gradeToExecute), _target(_enteredTarget) {}

Form &Form::operator=(const Form &oldObj) {
    this->_isSigned = oldObj._isSigned;
    return (*this);
}

void Form::execute(const Bureaucrat &bureaucrat) const{
    if (!getIsSigned())
        throw NotSignedYetException(NOT_SIGNED_YET);
    if (bureaucrat.getGrade() > getGradeToExecute())
        throw CouldntExecuteExcept(COULDNT_EXECUTE_FORM);
}

void Form::gradeChecking(int enteredValue){
    if (enteredValue > HIGHEST_VALUE)
        throw GradeTooHighExcept(HIGH_GRADE_MSG);
    if (enteredValue < LOWEST_VALUE)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
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
    out << form.getFormName() << " is " << (!form.getIsSigned() ? "not " : "") << "signed.";
    return (out);
}

Form::~Form(){}
