#include "Fixed.hpp"
/*
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
*/
int main ()
{
	int f1 = -21438;
	int f2 = 23647;
	Fixed a(f1);
	Fixed b(f2);

	std::cout << "diff in value" << std::endl;
	std::cout << f1 << " " << a << std::endl;
	std::cout << f2 << " " << b << std::endl;
	if ( a > b)
		std::cout << "error\n";
	else
		std::cout << "good\n";
	std::cout << b / a << " divi " << f2 / f1 << std::endl;
	std::cout << b * a << " mult " << f2 * f1 << std::endl;
}