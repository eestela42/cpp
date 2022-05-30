#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

/**********************[Constructeur]**********************/
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "target")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string targ) : Form("PresidentialPardonForm", 25, 5, targ)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : Form(rhs) 
{

}

/**********************[Destructeur]**********************/

PresidentialPardonForm::~PresidentialPardonForm(){

}

/**********************[Functions]**********************/

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by  Zaphod Beeblebrox. Glory to  Zaphod Beeblebrox !" << std::endl;
}

/**********************[Operateur]**********************/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	this->Form::operator=(rhs);
	return (*this);
}


