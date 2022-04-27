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

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this); 
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits called" << std::endl;
	return(this->_value);
}

 void Fixed::setRawBits( int const raw )
 {
	 std::cout << "setRawBits called" << std::endl;
	 this->_value = raw;
 }