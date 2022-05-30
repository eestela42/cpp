#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong arguments number" << std::endl;
		return (1);
	}
	if (!av[1] || !av[2] || !av[3])
	{
		std::cout << "error : one or multiple arguments are empty" << std::endl;
		return (1);
	}
	std::string file_name = std::string(av[1]);
	std::string origin = std::string(av[2]);
	std::string replace = std::string(av[3]);
	std::ifstream is (file_name.c_str(), std::ifstream::in);
	if (!is.is_open())
	{
		std::cout << "Error when opening the file" << std::endl;
		return (1);
	}
<<<<<<< HEAD
	std::ofstream os ((file_name + ".replace").c_str(), std::ios_base::out);
	if (is.is_open() && os.is_open())
=======
	std::ofstream os (file_name + ".replace", std::ios_base::out);
	if (os.is_open())
>>>>>>> c27eb36010938bcb646b2180c5ef95f54997749d
	{
		is.seekg (0, is.end);
    	int length = is.tellg();
    	is.seekg (0, is.beg);
		char * buffer = new char [length + 1];
		is.read (buffer,length);
		std::string str (buffer);
		delete[] buffer;
		is.close();
		int i = 0;
		int j;
		int start;
		while (str[i])
		{
			j = 0;
			start = i;
			while (origin[j] && str[i] && origin[j] == str[i])
				{ j++; i++; }
			if (j > 0 && !origin[j])
			{
				os << replace;
			}
			else
			{
				os << str[start];
				i = start + 1;
			}
		}
		os.close();
		return (0);
	}
	std::cout << "Error when making the .repalce file" << std::endl;
	return (1);
}