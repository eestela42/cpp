#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string targ);
	ShrubberyCreationForm(ShrubberyCreationForm const & ref);

	~ShrubberyCreationForm();

	virtual void action() const;
	
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);
	class GardeningException : public std::exception
	{};
};

#endif
