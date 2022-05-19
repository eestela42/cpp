#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string targ);
	PresidentialPardonForm(PresidentialPardonForm const & ref);

	~PresidentialPardonForm();

	virtual void action() const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
};

#endif
