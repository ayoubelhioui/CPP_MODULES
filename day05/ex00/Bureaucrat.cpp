#include "Bureaucrat.hpp"

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

const char *Bureaucrat::GradeTooHighExcept::what() const _NOEXCEPT{
    return (HIGH_GRADE_MSG);
}

const char *Bureaucrat::GradeTooLowExcept::what() const _NOEXCEPT{
    return (LOW_GRADE_MSG);
}

std::ostream &operator <<(std::ostream &out, Bureaucrat &obj){
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (out);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade == HIGHEST_VALUE)
            throw this->tooLowObject;
        this->_grade++;
}

void Bureaucrat::incrementGrade() {
        if (this->_grade == LOWEST_VALUE)
            throw this->tooHighObject;
        this->_grade--;
}

void Bureaucrat::setGrade(int enteredGrade) {
        if (enteredGrade > HIGHEST_VALUE)
            throw this->tooHighObject;
        if (enteredGrade < LOWEST_VALUE)
                throw this->tooLowObject;
        this->_grade = enteredGrade;
}

std::string Bureaucrat::getName() const{
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}
