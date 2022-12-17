#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {};

RobotomyRequestForm::RobotomyRequestForm( std::string _enteredtTarget) : Form(ROBOTOMY_GRADE_TO_SIGN, "Robotomy", ROBOTOMY_GRADE_TO_EXECUTE, _enteredtTarget) { };

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldObj) { *this = oldObj; }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &oldObj){
    this->_target = oldObj._target;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const{
    Form::execute(bureaucrat);
    srand(time(0));
    std::cout << "Robotimzed " << ((rand() % 2) ? "success" : "failed") << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}