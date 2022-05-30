#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_value;
	const int static	_dot = 8;
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

	bool	operator>(const Fixed &nbr) const;
	bool	operator<(const Fixed &nbr) const;
	bool	operator>=(const Fixed &nbr) const;
	bool	operator<=(const Fixed &nbr) const;
	bool	operator==(const Fixed &nbr) const;
	bool	operator!=(const Fixed &nbr) const;

	Fixed	operator+(const Fixed &nbr);
	Fixed	operator-(const Fixed &nbr);
	Fixed	operator*(const Fixed &nbr);
	Fixed	operator/(const Fixed &nbr);

	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);

	static Fixed &	min(Fixed &a, Fixed &b);
	static const Fixed &	min(const Fixed &a, const Fixed &b);
	static Fixed &	max(Fixed &a, Fixed &b);
	static const Fixed &	max(const Fixed &a, const Fixed &b);
};

 std::ostream& operator<<(std::ostream &output, const Fixed & rhs);


#endif