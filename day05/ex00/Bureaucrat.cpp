#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : _name(_name), _grade(_grade){
    std::cout << "Bureaucrat Parameterized Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &oldObj) {
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
    *this = oldObj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oldObj) {
    std::cout << "Bureaucrat Copy Assignment Operator Called" << std::endl;
    this->_grade = oldObj._grade;
}

const char *Bureaucrat::GradeTooHighExcept::what() {
    return (HIGH_GRADE_MSG);
}

const char *Bureaucrat::GradeTooLowExcept::what() {
    return (LOW_GRADE_MSG);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

void Bureaucrat::setGrade(int enteredGrade) {
    try{
        if (enteredGrade > 150)
            throw GradeTooHighExcept;
        if (enteredGrade < 1)
                throw GradeTooLowExcept;
        this->_grade = enteredGrade;
    }
    catch (GradeTooHighExcept e){
        std::cout << e.what() << std::endl;
    }
    catch(GradeTooLowExcept e){
        std::cout << e.what() << std::endl;
    }
}

std::string Bureaucrat::getName() const{
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}
