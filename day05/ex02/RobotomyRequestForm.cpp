#include "RobotomyRequestForm.hpp"
#include <stdlib.h> 
#include <time.h>

/**********************[Constructeur]**********************/
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "target")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string targ) : Form("RobotomyRequestForm", 72, 45, targ)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : Form(rhs)
{
}

/**********************[Destructeur]**********************/

RobotomyRequestForm::~RobotomyRequestForm(){

}

/**********************[Functions]**********************/

void	RobotomyRequestForm::action() const
{
	srand (time(NULL));
	std::cout << "*VzzZZZZZzzzZz BizzZZzz BizzZZ KLONG KLUNG*" << std::endl;
	if (rand() % 2 == 1)
		std::cout << "Robotmy has been a success. Welcome num : " << rand() << std::endl;
	else
		std::cout << "Robotomy has failed. Good bye HUMAN." << std::endl; 
}

/**********************[Operateur]**********************/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	this->Form::operator=(rhs);
	return (*this);
}


