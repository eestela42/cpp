#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called"  << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = nbr;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int based constructor called" << std::endl;
	this->_value = nbr << this->_dot;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float based constructor called" << std::endl;
	this->_value = roundf(nbr * (1 << this->_dot));
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this); 
}

int	Fixed::getRawBits( void ) const
{
	return(this->_value);
}

 void Fixed::setRawBits( int const raw )
 {
	 this->_value = raw;
 }

int	Fixed::toInt() const
{
	return (this->_value >> this->_dot);
}

float	Fixed::toFloat() const
{
	return static_cast<float> (this->_value) / (1 << this->_dot);
}

 std::ostream& operator<<(std::ostream &output, const Fixed & rhs)
 {
	 std::ostream *fct = &output;
	 if (fct)
	 	output << rhs.toFloat();
	return *fct;
 }