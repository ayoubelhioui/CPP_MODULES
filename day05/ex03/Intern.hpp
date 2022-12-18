#ifndef _INTERN_HPP_
#define _INTERN_HPP_
#define FORM_NOT_EXIST_MSG "FORM YOU ENTERED ISN'T EXIST"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

class Intern{
private:
    Form *ShrubberyForm(const std::string &_formTarget);
    Form *robotomyForm(const std::string &_formTarget);
    Form *PresidentialForm(const std::string &_formTarget);
class FormNotExist : public std::runtime_error{
public:
    FormNotExist(std::string _errorMsg);
};
public :
	Intern();
	Intern(const Intern &oldObj);
	Intern &operator =(const Intern &oldObj);
	~Intern();
    Form *makeForm(std::string formName, std::string formTarget);
};

typedef Form *(Intern::*memFn[3])(const std::string &_formTarget);
#endif