#include "Form.hpp"

Form::Form(/* args */) : name("Random Form"), isSigned(0),
						signGrade(150), exeGrade(150)
{
}

Form::Form(std::string str, int num) : name(str), isSigned(0),
						signGrade(num), exeGrade(num)
{
	checkGrade(signGrade);
}

Form::Form(Form &tmp) : name(tmp.name)
{
	*this = tmp;
}

Form::~Form()
{
}

const std::string	Form::getName()
{
	return (this->name);
}

bool				Form::getIsSigned()
{
	return (this->isSigned);
}

int					Form::getSignGrade()
{
	return (this->signGrade);
}

int					Form::getExeGrade()
{
	return (this->exeGrade);
}

void	Form::checkGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
}

void	Form::beSigned(Bureaucrat &guy)
{
	if (guy.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = 1;
}

Form &Form::operator=(Form &tmp)
{
	this->isSigned = tmp.isSigned;
	this->signGrade = tmp.signGrade;
	this->exeGrade = tmp.exeGrade;
	return (*this);
}

std::ostream &operator<<(std::ostream &ostream, Form &tmp)
{
	ostream <<  tmp.getName()
			<< " : is a form with a sign grade of " << tmp.getSignGrade()
			<< " execution grade of " << tmp.getExeGrade()
			<< " Signed status : " << tmp.getIsSigned();
	return (ostream);
}