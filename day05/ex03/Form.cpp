#include "Form.hpp"

Form::Form(/* args */) : name("Random Form"), isSigned(0),
						signGrade(150), exeGrade(150), target("target")
{
}

Form::Form(std::string str, int sign, int exe, std::string targ) : name(str), isSigned(0),
						signGrade(sign), exeGrade(exe), target(targ)
{
	checkGrade(signGrade);
}

Form::Form(const Form &tmp) : name(tmp.name)
{
	*this = tmp;
}

Form::~Form()
{
}

std::string	Form::getName() const
{
	return (this->name);
}

bool				Form::getIsSigned() const
{
	return (this->isSigned);
}

int					Form::getSignGrade() const
{
	return (this->signGrade);
}

int					Form::getExeGrade() const
{
	return (this->exeGrade);
}

std::string			Form::getTarget() const
{
	return (this->target);
}

void	Form::checkGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
}

void	Form::beSigned(const Bureaucrat &guy)
{
	if (guy.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	this->isSigned = 1;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned || executor.getGrade() > this->exeGrade)
		throw Form::CannotExecuteFormExeption() ;
	action();
}

Form &Form::operator=(const Form &tmp)
{
	this->isSigned = tmp.isSigned;
	this->signGrade = tmp.signGrade;
	this->exeGrade = tmp.exeGrade;
	this->target = tmp.target;
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