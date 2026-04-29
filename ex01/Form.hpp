#ifndef FORM_HPP
#define FORM_HPP 

#include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
    std::string name;
    bool Signed;
    const int gradeSign;
    const int gradeExec;
    void validGrade(int grade) const;
    public:

    Form();
    Form(const std::string name, int gradeSign, int gradExec);
    Form(const Form& other);
    Form& operator=(const Form&other);
    ~Form();

    const	std::string& getName() const;
    bool	isSigned() 	const;
    int		getSignGrade()	const;
    int		getExecGrade()	const;

    void beSigned(const Bureaucrat& b);
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
