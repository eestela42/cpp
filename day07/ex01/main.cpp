#include <iostream>
#include "template.hpp"

void	show(char a)
{
	std::cout << a;
}

int	main()
{
	std::string tab;

	tab = "LA BITE A ROGER";
	iter(tab, tab.length(), show);
	std::cout << std::endl;
}