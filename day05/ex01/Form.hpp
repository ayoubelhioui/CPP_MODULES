#ifndef _FORM_HPP_
#define _FORM_HPP_
#define HIGH_GRADE_MSG "TOO HIGH GRADE"
#define LOW_GRADE_MSG "TOO LOW GRADE"
#define COULDNT_EXECUTE_FORM "COULDN'T EXECUTE FORM"
#define NOT_SIGNED_YET "FORM NOT SIGNED YET !"
#define HIGHEST_VALUE 150
#define LOWEST_VALUE 1
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
public :
    class GradeTooHighExcept : public std::runtime_error{
        public :
            GradeTooHighExcept(const std::string &errorMessage);
    };
    class GradeTooLowExcept : public std::runtime_error{
        public:
            GradeTooLowExcept(const std::string &errorMessage);
    };
	Form();
    Form(int _gradeToSign, std::string _formName, int _gradeToExecute);
	Form(const Form &oldObj);
	Form &operator =(const Form &oldObj);
	~Form();
    int getGradeToExecute() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    std::string getFormName() const;
    void beSigned(const Bureaucrat &bureaucrat);
private :
    static int gradeChecking(int enteredValue);
    bool _isSigned;
    const int _gradeToSign;
    const std::string _formName;
    const int _gradeToExecute;
};

std::ostream &operator << (std::ostream &out, const Form &form);
#endif