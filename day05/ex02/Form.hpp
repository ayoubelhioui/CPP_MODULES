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
    class CouldntExecuteExcept : public std::runtime_error{
        public:
            CouldntExecuteExcept(const std::string &errorMessage);
    };
    class NotSignedYetException : public std::runtime_error{
        public:
            NotSignedYetException(const std::string &errorMessage);
};
	Form();
    Form(std::string target);
    Form(std::string _formName, bool _isSigned, int _gradeToSign, int _gradeToExecute);
	Form(const Form &oldObj);
	Form &operator =(const Form &oldObj);
	~Form();
    int getGradeToExecute() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    std::string getFormName() const;
    void setGradeToExecute(int enteredGradeToExecute);
    void setGradeToSign(int enteredGradeToSign);
    void beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &bureaucrat) const = 0;
private :
    void gradeChecking(int enteredValue);
    bool _isSigned;
    const int _gradeToSign;
    const std::string _formName;
    const int _gradeToExecute;
protected:
    std::string _target;
};

std::ostream &operator << (std::ostream &out, const Form &form);
#endif