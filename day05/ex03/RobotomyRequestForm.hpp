#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string targ);
	RobotomyRequestForm(RobotomyRequestForm const & ref);

	~RobotomyRequestForm();

	virtual void action() const;
	
	RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
};

#endif
