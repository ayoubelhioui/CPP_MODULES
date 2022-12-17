#ifndef _ROBOTOMY_HPP_
#define _ROBOTOMY_HPP_
#define ROBOTOMY_GRADE_TO_SIGN 72
#define ROBOTOMY_GRADE_TO_EXECUTE 45
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form{
public :
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &oldObj);
	RobotomyRequestForm &operator =(const RobotomyRequestForm &oldObj);
	~RobotomyRequestForm();
    void execute(const Bureaucrat &bureaucrat) const;
};
#endif