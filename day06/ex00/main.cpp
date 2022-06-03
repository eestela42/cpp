#include <iostream>

void	convChar(std::string &str)
{
	char c;
	if (str.size() == 1)
		c = static_cast<char>str[0];
	
}

int	main(int ac, char **av)
{
	if (ac!= 2 || !av[1])
	{
		std::cout << "argument error" << std::endl;
		return (1);
	}
	


}