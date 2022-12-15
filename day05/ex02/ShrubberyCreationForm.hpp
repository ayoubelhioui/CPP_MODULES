#ifndef _SHRUBBERY_HPP_
#define _SHRUBBERY_HPP_


#define GRADE_TO_SIGN 145
#define GRADE_TO_EXECUTE 137
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
private:
    void writingASCIITree() const;
public :
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &oldObj);
	ShrubberyCreationForm &operator =(const ShrubberyCreationForm &oldObj);
	~ShrubberyCreationForm();
    void execute(const Bureaucrat &bureaucrat) const;
};
#endif