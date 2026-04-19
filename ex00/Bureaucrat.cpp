#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	this->name = obj.name;
	this->grade = obj.grade;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
                throw  GradeTooLowException();
        if (grade < 1)
                throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{}

std::string  Bureaucrat::getName()
{
	return this->name;
}

int  Bureaucrat::getGrade()
{
	return this->grade;
}

void Bureaucrat::setName(const std::string &name)
{
	this->name = name;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw  GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator++()
{
	this->grade += 1;
	if (grade > 150)
		throw GradeTooLowException();
	return *this;
}

Bureaucrat& Bureaucrat::operator--()
{
	this->grade -= 1;
	if (grade < 1)
		throw GradeTooHighException();
	return *this;
}

std::ostream& operator<<(std::ostream& cout, Bureaucrat &obj)
{
	cout << obj.getName() << " Bureaucrat grade" << obj.getGrade();
	return cout;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
        return "Grade too High";
}
