#include <iostream>
#include <fstream>

int		ft_replace(std::string str, std:;string replace, int start)
{
	
}

int		main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "wrong arguments number" << std::endl; return (1);
	if (!ac[1] || !ac[2] || ac[3])
		std::cout << "error one or multiple arguments are empty" << std::endl; return (1);
	std::ifstream is (av[1], std::ifstream::in);
	if (is)
	{
		is.seekg (0, is.end);
    	int length = is.tellg();
    	is.seekg (0, is.beg);
		char * buffer = new char [length];
		is.read (buffer,length);
		std::string str = std::string(buffer);
		delete[] buffer;
		is.close();
		std::string origin = std::string(av[2]);
		std::string replace = std::string(av[3]);
		int i = 0;
		int j;
		int start;
		int end;
		while (str[i])
		{
			j = 0;
			start = i;
			while (origin[j] && str[i] && origin[j] == str[i])
				j++; i++;
			if (j > 0 && !av[2][j] && str[i])
			{
				ft_replace(str, replace, start);
				start + (int)str.length();
			}
			else
				i = start + 1;	
		}

	}
}