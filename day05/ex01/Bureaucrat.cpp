#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(/* args */) : name("Unnamed"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string str, int num) : name(str), grade(num)
{
	checkGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &tmp) : name(tmp.name), grade(tmp.grade)
{
	checkGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::checkGrade(int newGrade)
{
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::upgrade()
{
	checkGrade(grade - 1);
	grade--;
}

void	Bureaucrat::downgrade()
{
	checkGrade(grade + 1);
	grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl; 
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << this->name << " couldn't signed " << form.getName()
				<< " because of GRADE TOO LOW."<< std::endl; 
	}
	
}

const std::string Bureaucrat::getName()
{
	return this->name;
}

int Bureaucrat::getGrade()
{
	return this->grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &tmp)
{
	this->grade = tmp.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp)
{
	if (output)
		output << tmp.getName() << ", bureaucrate grade " << tmp.getGrade();
	return (output);
}