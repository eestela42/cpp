#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value;
	const int	_dot = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &nbr);
	Fixed(const int nbr);
	Fixed(const float nbr);
	
	int		getRawBits( void ) const;
	void	setRawBits(int const raw);
	float	toFloat()const;
	int		toInt()const;

	Fixed &	operator=(const Fixed &rhs);
};

 std::ostream& operator<<(std::ostream &output, const Fixed & rhs);


#endif