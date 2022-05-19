#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	Intern(Intern const & ref);

	~Intern();

	Form	*makeForm(std::string name, std::string target);

	Intern &operator=(Intern const & rhs);
};

#endif
