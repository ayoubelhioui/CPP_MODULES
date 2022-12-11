#ifndef _FORM_HPP_
#define _FORM_HPP_
#define HIGH_GRADE_MSG "TOO HIGH GRADE"
#define LOW_GRADE_MSG "TOO LOW GRADE"
#define HIGHEST_VALUE 150
#define LOWEST_VALUE 1
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
public :
    class GradeTooHighExcept : public std::exception{
    public :
        const char *what() const _NOEXCEPT;
    };
    class GradeTooLowExcept : public std::exception{
    public :
        const char *what() const _NOEXCEPT;
    };
	Form();
    Form(std::string _formName, bool _isSigned, int _gradeToSign, int _gradeToExecute);
	Form(const Form &oldObj);
	Form &operator =(const Form &oldObj);
	~Form();
    void gradeChecking(int enteredValue);
    int getGradeToExecute() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    std::string getFormName() const;
    void setGradeToExecute(int enteredGradeToExecute);
    void setGradeToSign(int enteredGradeToSign);
    void beSigned(const Bureaucrat &bureaucrat);
private :
    GradeTooLowExcept tooLowObject;
    GradeTooHighExcept tooHighObject;
    const std::string _formName;
    bool _isSigned;
    int _gradeToSign;
    int _gradeToExecute;
};

std::ostream &operator << (std::ostream &out, const Form &form);
#endif