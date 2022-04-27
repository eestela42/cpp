#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl	{

typedef  void	(Harl::*MemberFunction)(void);
	private:
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
	public:
	
	Harl();
	~Harl();
	void complain( std::string level );
};


#endif