#include "Form.hpp"

Form::Form() : _isSigned(false){
    std::cout << "Form Default Constructor Called" << std::endl;
}

Form::Form(std::string _formName, bool _isSigned, int _gradeToSign, int _gradeToExecute) : _formName(_formName), _isSigned(_isSigned), _gradeToExecute(_gradeToExecute){
    std::cout << "Form Parameterize Constructor Called" << std::endl;
    setGradeToSign(_gradeToSign);
}

Form::Form(const Form &oldObj) {
    std::cout << "Form Copy Constructor Called" << std::endl;
    *this = oldObj;
}

Form &Form::operator=(const Form &oldObj) {
    std::cout << "Form Copy Assignment Operator Called" << std::endl;
    this->_isSigned = oldObj._isSigned;
    this->_gradeToSign = oldObj._gradeToSign;
//     *(std::string*)(&this->_formName) = oldObj._formName;
    return (*this);
}

void Form::gradeChecking(int enteredValue){
    try{
        if (enteredValue > HIGHEST_VALUE)
            throw this->tooHighObject;
        if (enteredValue < LOWEST_VALUE)
                throw this->tooLowObject;
        this->_gradeToSign = enteredValue;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
void Form::setGradeToSign(int enteredGradeToSign) {
//    try{
//        if (enteredGradeToSign > HIGHEST_VALUE)
//            throw this->tooHighObject;
//        if (enteredGradeToSign < LOWEST_VALUE)
//                throw this->tooLowObject;
//        this->_gradeToSign = enteredGradeToSign;
//    }
//    catch(std::exception &e){
//        std::cout << e.what() << std::endl;
//    }
    gradeChecking(enteredGradeToSign);
}

void Form::setGradeToExecute(int enteredGradeToExecute) {
//    try{
//        if (enteredGradeToExecute > HIGHEST_VALUE)
//            throw this->tooHighObject;
//        if (enteredGradeToExecute < LOWEST_VALUE)
//                throw this->tooLowObject;
//        this->_gradeToSign = enteredGradeToExecute;
//    }
//    catch(std::exception &e){
//        std::cout << e.what() << std::endl;
//    }
    gradeChecking(enteredGradeToExecute);
}

const char* Form::GradeTooHighExcept::what() const _NOEXCEPT {
    return (HIGH_GRADE_MSG);
}

const char* Form::GradeTooLowExcept::what() const _NOEXCEPT {
    return (LOW_GRADE_MSG);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    try{
        if (bureaucrat.getGrade() > this->_gradeToSign)
            throw this->tooLowObject;
        this->_isSigned = true;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
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