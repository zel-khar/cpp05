#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bereaucrat
{
	private:
		int Grade;
		std::string name;
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
	public:
		Bereaucrat();
                Bereaucrat(Bereaucrat &obj);
                ~Bereaucrat();
		getName(std::string name);
		getGrade(int Grade);
}

#endif
