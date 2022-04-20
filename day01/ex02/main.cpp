#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string *	stringPTR = &str;
	std::string &	stringREF = str;

	std::cout << "Addresse str              : " << &str << std::endl
	<< "Address held by stringPTR : " << stringPTR << std::endl
	<<  "Address held by stringREF : " << &stringREF << std::endl	;

	std::cout << "value of str             : " << str << std::endl
	<< "valued held by stringPTR : " << *stringPTR << std::endl
	<< "valued held by stringREF : " << stringREF << std::endl	;
	return (0);
}