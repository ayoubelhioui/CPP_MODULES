#ifndef _ROBOTOMY_HPP_
#define _ROBOTOMY_HPP_


#define GRADE_TO_SIGN 72
#define GRADE_TO_EXECUTE 45
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public :
    RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &oldObj);
	RobotomyRequestForm &operator =(const RobotomyRequestForm &oldObj);
	~RobotomyRequestForm();
    void execute(const Bureaucrat &bureaucrat);
};
#endif