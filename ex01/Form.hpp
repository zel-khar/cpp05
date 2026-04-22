#ifndef FORM_HPP
#define FORM_HPP 

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
    std::string name;
    bool Signed;
    const int gradeSign;
    const int gradeExec;
    public:
    class GradeTooLowException : public std::exception
    {
        public:
        const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
        const char *what() const throw();
    };
}

#endif 
