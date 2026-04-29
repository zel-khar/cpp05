#include "Form.hpp"

Form::Form()
{}

Form::Form(const std::string& name, int signGrade, int execGrade) 
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	validGrade(signGrade);
	validGrade(execGrade);
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), signGrad(other.signGrade), execGrade(execGrade)
{
}

void Form::validGrade(int grade) const
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		isSigned = other.isSigned;
	return *this;
}

void Form::beSigned(const Bureaucrat& b)
{
	if(b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}
