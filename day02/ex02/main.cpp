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
	Fixed a(35);
	Fixed b(36000);

	if ( a > b)
		std::cout << "error\n";
	else
		std::cout << "good\n";
	std::cout << b + a << " = " << 36000 + 35 << std::endl;
}