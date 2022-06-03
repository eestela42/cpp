#include <iostream>
#include "array.hpp"


int	main()
{
	try
	{

	unsigned int size = 10;
	{
		Array<int> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = i;
		Array<int> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	{
		Array<char> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = 'a' + i;
		Array<char> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	{
		Array<float> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = 0.33f + i;
		Array<float> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	{
		Array<char*> tab(size);
		//for (unsigned int i = 0; i < tab.size(); i++)
		//	tab[i] = 0.33f + i;
		Array<char*> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}