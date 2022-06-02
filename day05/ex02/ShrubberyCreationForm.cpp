#include "ShrubberyCreationForm.hpp"
#include <fstream>

/**********************[Constructeur]**********************/
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string targ) : Form("ShrubberyCreationForm", 145, 137, targ)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs) : Form(rhs)
{
}

/**********************[Destructeur]**********************/

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

/**********************[Functions]**********************/

void	ShrubberyCreationForm::action() const
{
	try
	{
		std::string    shrubber =
"\n\
  .oOOo.  \n\
 .o00oOo. \n\
..oOOOoo.. \n\
.oOooOOooOo..\n\
.oOoOOOOoo. \n\
.oooOoOo.  \n\
 .O/||\\O. \n\
    ||     \n\
";
		std::string file(this->getTarget() + "_shrubbery");
		std::ofstream os (file.c_str(), std::ios_base::app);

		if (!os.is_open())
			throw ShrubberyCreationForm::GardeningException();
		os << shrubber;
	}
	catch (std::exception &e)
	{
		std::cout << "The garden {FILE} cannot be opened. The gardener is out of job now." << std::endl;
	}

}

/**********************[Operateur]**********************/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	this->Form::operator=(rhs);
	return (*this);
}


