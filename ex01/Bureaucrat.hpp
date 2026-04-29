#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>


class Bureaucrat 
{
	std::string name;
	int grade;
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
	Bureaucrat();
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat &obj);
	std::string getName();
	int getGrade();
	void setName(const std::string &name);
	void setGrade(int grade);
	Bureaucrat& operator++();
	Bureaucrat& operator--();
	void signForm(Form& form);
};	

std::ostream& operator<<(std::ostream &cout ,Bureaucrat &obj);

#endif

