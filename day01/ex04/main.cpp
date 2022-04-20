#include <iostream>
#include <fstream>

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
		int i = 0;
		int j;
		int start;
		int end;
		while (str[i])
		{
			j = 0;
			start = i;
			while (av[2][j] && str[i] && av[2][j] == str[i])
				j++; i++;
			if (j > 0 && !av[2][j] && str[i])
				
		}

	}
}