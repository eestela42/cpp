#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
	Bureaucrat	noob("Noob", 150);
	Bureaucrat	mid("Mid", 75);
	Bureaucrat	master("master", 1);

	Intern		randy;

	Form *tab[3] = {randy.makeForm("robotomy request", "Juda"),
					randy.makeForm("presidential pardon", "DSK"),
					randy.makeForm("shrubbery creatio", "Le musee ne reviendra pas")};

	std::cout << std::endl << "----All Bureaucrats try to execute non signed form copy (of pardon)" << std::endl;

	if (tab[0])
	{
		noob.executeForm(*tab[0]);
		mid.executeForm(*tab[0]);
		master.executeForm(*tab[0]);
	}

	std::cout << std::endl << "----noob tries to sign pardon" << std::endl;

	noob.signForm(*tab[1]);

	for (int i = 0; i < 3; i++)
	{
		if (tab[i])
		{
			std::cout << std::endl << "---All Bureaucrates try to execute the signed form num" << i + 1 << std::endl;
			master.signForm(*tab[i]);
			noob.executeForm(*tab[i]);
			mid.executeForm(*tab[i]);
			master.executeForm(*tab[i]);
			delete tab[i];
		}
	}

	randy.makeForm("job request", "randy");
	}
	catch (std::exception &e)
	{
		std::cout << "something went wrong" << std::endl;
	}

}