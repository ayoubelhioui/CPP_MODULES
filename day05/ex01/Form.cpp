#include "Form.hpp"

Form::GradeTooHighExcept::GradeTooHighExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::GradeTooLowExcept::GradeTooLowExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Form::Form() : _isSigned(false){
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(std::string _formName, bool _isSigned, int _gradeToSign, int _gradeToExecute) : _formName(_formName), _isSigned(_isSigned), _gradeToExecute(_gradeToExecute){
    setGradeToSign(_gradeToSign);
    std::cout << "Form Parameterize Constructor Called" << std::endl;
}

Form::Form(const Form &oldObj) {
    std::cout << "Form Copy Constructor Called" << std::endl;
    *this = oldObj;
}

Form &Form::operator=(const Form &oldObj) {
    std::cout << "Form Copy Assignment Operator Called" << std::endl;
    this->_isSigned = oldObj._isSigned;
    this->_gradeToSign = oldObj._gradeToSign;
    return (*this);
}

void Form::gradeChecking(int enteredValue){
    if (enteredValue > HIGHEST_VALUE)
        throw GradeTooHighExcept(HIGH_GRADE_MSG);
    if (enteredValue < LOWEST_VALUE)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
    this->_gradeToSign = enteredValue;
}

void Form::setGradeToSign(int enteredGradeToSign) {
    gradeChecking(enteredGradeToSign);
}

void Form::setGradeToExecute(int enteredGradeToExecute) {
    gradeChecking(enteredGradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
    this->_isSigned = true;
}

int Form::getGradeToExecute() const{
    return (this->_gradeToExecute);
}

std::string Form::getFormName() const {
    return (this->_formName);
}

int Form::getGradeToSign() const{
    return (this->_gradeToSign);
}

bool Form::getIsSigned() const{
    return (this->_isSigned);
};

std::ostream &operator << (std::ostream &out, const Form &form){
    out << form.getFormName() << " is " << (!form.getIsSigned() ? "not " : "") << "signed.";
    return (out);
}

Form::~Form(){
    std::cout << "Form Destructor Called" << std::endl;
}