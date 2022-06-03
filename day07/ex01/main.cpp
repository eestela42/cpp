#include <iostream>
#include "template.hpp"

void	show_char(char a)
{
	std::cout << a;
}

void	show_int(int i)
{
	std::cout << i << " ";
}

int	main()
{
	std::string tab;

	tab = "chaine de test";
	iter(tab, tab.length(), show_char);
	std::cout << std::endl;
	int	nums[3] = {1, 256, 85};
	iter(nums, 3, show_int);
	std::cout << std::endl;
}