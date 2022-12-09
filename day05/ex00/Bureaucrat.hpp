#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_
#define HIGH_GRADE_MSG "ADD A LOWER GRADE"
#define LOW_GRADE_MSG "ADD A HIGHER GRADE"
#include <iostream>
#include <exception>


class Bureaucrat{
private :
    const std::string _name;
    int _grade;
public :
    class GradeTooHighExcept : public std::exception{
    public :
        const char *what();
    };
    class GradeTooLowExcept : public std::exception{
    public :
        const char *what();
    };
    Bureaucrat();
    Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat &oldObj);
	Bureaucrat &operator =(const Bureaucrat &oldObj);
	~Bureaucrat();
    void setName(std::string enteredName);
    std::string getName() const;
    void setGrade(int enteredGrade);
    int getGrade() const;
};
#endif