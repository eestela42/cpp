#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Leo("Leo", 115);
	Bureaucrat Mini("Min", 150);
	Bureaucrat Max("Max", 1);
	Bureaucrat Randy;

	try
	{
		std::cout << Leo << std::endl << Mini << std::endl << Max << std::endl
			<< Randy << std::endl;
		Max.upgrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Someone tried to take control DANGER !" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Someone is so bad he must be fired NOW !" << std::endl;
	}

	try
	{
		std::cout << Leo << std::endl << Mini << std::endl << Max << std::endl
			<< Randy << std::endl;
		Mini.downgrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Someone tried to take control DANGER !" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Someone is so bad he must be fired NOW !" << std::endl;
	}

	try
	{
		Bureaucrat Djeah("Djeah", 2000);
		std::cout << Leo << std::endl << Mini << std::endl << Max << std::endl
			<< Randy << std::endl << Djeah << std::endl;
		Mini.downgrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Someone tried to take control DANGER !" << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Someone is so bad he must be fired NOW !" << std::endl;
	}
}
