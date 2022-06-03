#include <iostream>
#include "array.hpp"


int	main()
{
	try
	{
	unsigned int size = 10;
	{
		std::cout << "Test for int" << std::endl;
		Array<int> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = i;
		Array<int> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
		int *a = new int();
		Array<int> newArray(1);
		std::cout << "Test with new : "<< *a << " " << newArray[0] << std::endl;

	}
	{
		std::cout << "Test for char" << std::endl;
		Array<char> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = 'a' + i;
		Array<char> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	{
		std::cout << "Test for float" << std::endl;
		Array<float> tab(size);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = 0.33f + i;
		Array<float> copy(tab);
		std::cout << tab << std::endl << copy << std::endl;
	}
	{
		std::cout << "Test for std::string" << std::endl;
		Array<std::string> tab(size);
		tab[0] = "Word";		
		Array<std::string> copy(tab);
		tab[0] = "NotAWord";
		std::cout << tab << std::endl << copy << std::endl;
	}
	Array<int> tab;
	tab[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << "Array::Index out of limits" << e.what() << std::endl;
	}
} 