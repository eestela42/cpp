#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl	;
}

void	Harl::info( void )
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl	;
}

void	Harl::warning( void )
{
	std::cout	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
				<< std::endl	;
}

void	Harl::error( void )
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl	;
}

	Harl::Harl(){}

	Harl::~Harl(){}

void	Harl::complain( std::string level )
{
	std::string		msg[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && level != msg[i])
		i++;
	switch (i)
	{
		case 0: Harl::debug();
		case 1: Harl::info();
		case 2: Harl::warning();
		case 3: {Harl::error(); break;}
		case 4: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
