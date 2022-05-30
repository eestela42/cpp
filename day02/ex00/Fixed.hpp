#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int			_value;
	const int static	_dot = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &nbr);
	Fixed	& operator=(const Fixed &rhs);
	int getRawBits( void ) const;
	void setRawBits(int const raw);
};



#endif