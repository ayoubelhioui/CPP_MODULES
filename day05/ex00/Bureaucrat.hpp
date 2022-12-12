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
    class GradeTooHighExcept : public std::exception{
    public :
        const char *what() const _NOEXCEPT;
    };
    class GradeTooLowExcept : public std::exception{
    public :
        const char *what() const _NOEXCEPT;
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
    static GradeTooLowExcept tooLowObject;
    static GradeTooHighExcept tooHighObject;
};
std::ostream &operator <<(std::ostream &out, Bureaucrat &obj);
#endif