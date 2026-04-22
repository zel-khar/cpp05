#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat obj("laarbi", 30);
	std::cout << "--------------------------" << std::endl; 
	std::cout << obj << std::endl;
	std::cout << "--------------------------" << std::endl; 
	try
	{
		Bureaucrat obj("laarbi", 151);
	}
	catch(std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
	std::cout << "--------------------------" << std::endl; 
	try
	{
		Bureaucrat obj("laarbi", -66666);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl; 
}
