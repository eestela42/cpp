#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	int					signGrade;
	int					exeGrade;
	std::string			target;
public:
	Form(/* args */);
	Form(const Form &tmp);
	Form(std::string str, int sign, int exe, std::string targ);
	virtual ~Form();

	std::string			getName()const;
	bool				getIsSigned()const;
	int					getSignGrade()const;
	int					getExeGrade()const;
	std::string			getTarget()const;
	void				checkGrade(int newGrade);

	void			beSigned(const Bureaucrat &guy);
	void			execute(Bureaucrat const & executor) const;
	virtual void 	action() const = 0;

	Form	&operator=(const Form &tmp);
	class GradeTooHighException : std::exception
	{};

	class GradeTooLowException : std::exception
	{};

	class CannotExecuteFormExeption : std::exception
	{};
};

std::ostream &operator<<(std::ostream &ostream, Form &tmp);



#endif