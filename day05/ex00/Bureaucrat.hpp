#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private :
	const std::string 	name;
	int					grade;
public :
	Bureaucrat(/* args */);
	Bureaucrat(std::string str, int name);
	Bureaucrat(Bureaucrat &tmp);
	~Bureaucrat();

	void checkGrade(int newGrade);

	Bureaucrat &operator=(Bureaucrat &tmp);

	void upgrade();
	void downgrade();
	const std::string getName();
	int	getGrade();


	class GradeTooHighException : public std::exception
	{
	};

	class GradeTooLowException : public std::exception
	{
	};
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &tmp);



#endif