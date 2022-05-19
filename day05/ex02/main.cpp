#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	PresidentialPardonForm	pardon("Lapin");
	PresidentialPardonForm	copy(pardon);
	RobotomyRequestForm		robot("Human");
	ShrubberyCreationForm	tree("Park");

	Bureaucrat	noob("Noob", 150);
	Bureaucrat	mid("Mid", 75);
	Bureaucrat	master("master", 1);

	Form *tab[3] = {&copy, &robot, &tree};

	std::cout << std::endl << "----All Bureaucrats try to execute non signed form copy (of pardon)" << std::endl;

	noob.executeForm(*tab[0]);
	mid.executeForm(*tab[0]);
	master.executeForm(*tab[0]);

	std::cout << std::endl << "----noob tries to sign pardon" << std::endl;

	noob.signForm(pardon);

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl << "---All Bureaucrates try to execute the signed form num" << i + 1 << std::endl;
		master.signForm(*tab[i]);
		noob.executeForm(*tab[i]);
		mid.executeForm(*tab[i]);
		master.executeForm(*tab[i]);
	}

}