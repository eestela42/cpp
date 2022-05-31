#include "Fixed.hpp"

/* constructor destructor */
Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed & nbr)
{
	*this = nbr;
}

Fixed::Fixed(const int nbr)
{
	this->_value = nbr << this->_dot;
}

Fixed::Fixed(const float nbr)
{
	this->_value = roundf(nbr * (1 << this->_dot));
}

/* get && set */

int	Fixed::getRawBits( void ) const
{
	return(this->_value);
}

 void Fixed::setRawBits( int const raw )
 {
	 this->_value = raw;
 }

/* converter */

int	Fixed::toInt() const
{
	return (this->_value >> this->_dot);
}

float	Fixed::toFloat() const
{
	return (float) (this->_value) / (1 << this->_dot);
}

 std::ostream& operator<<(std::ostream &output, const Fixed & rhs)
 {
	 std::ostream *fct = &output;
	 if (fct)
	 	output << rhs.toFloat();
	return *fct;
 }

Fixed &Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this); 
}

/* comparaison */

bool	Fixed::operator>(const Fixed &nbr) const
{
	return (this->_value > nbr.getRawBits());
}

bool	Fixed::operator<(const Fixed &nbr) const
{
	return (this->_value < nbr.getRawBits());
}

bool	Fixed::operator>=(const Fixed &nbr) const
{
	return (this->_value >= nbr.getRawBits());
}

bool	Fixed::operator<=(const Fixed &nbr) const
{
	return (this->_value <= nbr.getRawBits());
}

bool	Fixed::operator==(const Fixed &nbr) const
{
	return (this->_value == nbr.getRawBits());
}

bool	Fixed::operator!=(const Fixed &nbr) const
{
	return (this->_value != nbr.getRawBits());
}

/* maths operators */

Fixed	Fixed::operator+(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value + nbr.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value - nbr.getRawBits());
	return tmp;
}
Fixed	Fixed::operator*(const Fixed &nbr)
{
	Fixed	tmp;
	
	tmp.setRawBits((int)((float)this->_value * (float)nbr._value / ( 1 << this->_dot)));
	return tmp;
}
Fixed	Fixed::operator/(const Fixed &nbr)
{
	Fixed	tmp;

	tmp.setRawBits((int)((float)this->_value / (float)nbr._value * ( 1 << this->_dot)));
	return tmp;
}
// IL Y A DES PROBELEMS
/* iterators */

Fixed	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

/* comparators */

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed &	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
