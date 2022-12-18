#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighExcept::GradeTooHighExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Bureaucrat::GradeTooLowExcept::GradeTooLowExcept(const std::string &errorMessage) : std::runtime_error(errorMessage){};

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : _name(_name){
    setGrade(_grade);
    std::cout << "Bureaucrat Parameterized Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &oldObj) {
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
    *this = oldObj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oldObj) {
    std::cout << "Bureaucrat Copy Assignment Operator Called" << std::endl;
    this->_grade = oldObj._grade;
    return (*this);
}

std::ostream &operator <<(std::ostream &out, Bureaucrat &obj){
    out << obj.getName() << ", bureaucrat grade is : " << obj.getGrade() << ".";
    return (out);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

void Bureaucrat::incrementGrade() { (this->_grade == LOWEST_VALUE ? throw GradeTooHighExcept(HIGH_GRADE_MSG) : this->_grade--); }

void Bureaucrat::decrementGrade() { (this->_grade == HIGHEST_VALUE ? throw GradeTooLowExcept(LOW_GRADE_MSG) : this->_grade++); }


void Bureaucrat::setGrade(int enteredGrade) {
    if (enteredGrade > HIGHEST_VALUE)
        throw GradeTooHighExcept(HIGH_GRADE_MSG);
    if (enteredGrade < LOWEST_VALUE)
        throw GradeTooLowExcept(LOW_GRADE_MSG);
    this->_grade = enteredGrade;
}

std::string Bureaucrat::getName() const{
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}
