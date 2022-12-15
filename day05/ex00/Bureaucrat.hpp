#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_
#define HIGH_GRADE_MSG "TOO HIGH GRADE"
#define LOW_GRADE_MSG "TOO LOW GRADE"
#define HIGHEST_VALUE 150
#define LOWEST_VALUE 1
#include <iostream>
#include <exception>

class Bureaucrat{
public :
    class GradeTooHighExcept : public std::runtime_error{
    public :
        GradeTooHighExcept(const std::string &errorMessage);
    };
    class GradeTooLowExcept : public std::runtime_error{
    public:
        GradeTooLowExcept(const std::string &errorMessage);
    };
    Bureaucrat();
    Bureaucrat(std::string _name, int _grade);
    Bureaucrat(const Bureaucrat &oldObj);
    Bureaucrat &operator =(const Bureaucrat &oldObj);
    ~Bureaucrat();
    void incrementGrade();
    void decrementGrade();
    void setGrade(int enteredGrade);
    std::string getName() const;
    int getGrade() const;
private :
    const std::string _name;
    int _grade;
};

std::ostream &operator <<(std::ostream &out, Bureaucrat &obj);
#endif
