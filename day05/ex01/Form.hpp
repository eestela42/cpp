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
public:
	Form(/* args */);
	Form(Form &tmp);
	Form(std::string str, int num);
	~Form();

	const std::string	getName();
	bool				getIsSigned();
	int					getSignGrade();
	int					getExeGrade();
	void				checkGrade(int newGrade);

	void	beSigned(Bureaucrat &guy);

	Form	&operator=(Form &tmp);
	class GradeTooHighException : public std::exception
	{};

	class GradeTooLowException : public std::exception
	{};
};

std::ostream &operator<<(std::ostream &ostream, Form &tmp);



#endif