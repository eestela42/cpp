#include "struct.hpp"

int	findType(std::string str)
{
	if (str[0] == '\'')
		return (0);
	if (str.find('.') == std::string::npos && str.find('n') == std::string::npos) //checker si f dans string importe
		return (1);
	if (str[str.size() - 1] == 'f' && (str.size() < 3 || str.substr(str.size() - 3) != "inf"))
		return (2);
	return (3);
}

void	display(t_struct &data)
{
	if (data.d > 255 || data.d < 0 || isnan(data.d) || isnan(data.f))
		std::cout << "char : impossible" << std::endl;
	else if (!std::isprint(data.c))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << data.c << "'" <<std::endl;
	if (data.d > INT_MAX || data.d < INT_MIN || isnan(data.d) || isnan(data.f))
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << data.i << std::endl;
	
	std::cout << "float : " << std::fixed <<std::setprecision(1) << data.f << "f" <<std::endl;
	std::cout << "double : " << data.d << std::endl;
}

void	convChar(std::string &str)
{
	char c;
	if (str.size() == 1)
		c = static_cast<char>(str[0]);
	
}

int	main(int ac, char **av)
{
	if (ac!= 2 || !av[1])
	{
		std::cout << "argument error" << std::endl;
		return (1);
	}
	std::string str(av[1]);
	t_struct data;
	int	(*fct[4])(std::string str, t_struct &data) = {manageChar, manageInt, manageFloat, manageDouble};
	if (fct[findType(str)](str, data))
		return (1);
	display(data);
	return (0);
}