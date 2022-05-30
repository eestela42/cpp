#include "Intern.hpp"

/**********************[Constructeur]**********************/
Intern::Intern(){

}

Intern::Intern(Intern const & rhs){
    *this = rhs;
}

/**********************[Destructeur]**********************/

Intern::~Intern(){

}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;
	
	while (i < 3 && tab[i] != name)
		i++;
	
	switch (i)
	{
		case 0 :
			std::cout << "case robot\n";
			return ( new RobotomyRequestForm(target));
		case 1 :
		std::cout << "case pardon\n";
			return ( new PresidentialPardonForm(target));
		case 2 :
		std::cout << "case bush\n";
			return ( new ShrubberyCreationForm(target));
		default :
			std::cout << "The intern split the cofee or something, in anycase this is not my fault if the form HAS NOT BEEN created. Fire him."
						<< std::endl;
	}
	return (NULL);
}

/**********************[Operateur]**********************/

Intern &Intern::operator=(Intern const & rhs){
	(void)rhs;
	return (*this);
}


