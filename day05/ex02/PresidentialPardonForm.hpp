#ifndef _PRESIDENT_FORM_HPP_
#define _PRESIDENT_FORM_HPP_
#define GRADE_TO_SIGN 25
#define GRADE_TO_EXECUTE 5
#include "Form.hpp"
class PresidentialPardonForm : public Form{
public :
	PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &oldObj);
	PresidentialPardonForm &operator =(const PresidentialPardonForm &oldObj);
	~PresidentialPardonForm();
    void execute(const Bureaucrat &bureaucrat);
};
#endif