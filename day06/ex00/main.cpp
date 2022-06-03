#include <iostream>
#include <sstream>
#include <limits>
#include <limits.h>
#include <math.h>
#include <iomanip>
typedef struct s_struct
{
	char	c;
	int		i;
	float	f;
	double	d;
}				t_struct;

int	firstCharError(char c)
{
	std::string tab = "0123456789+-";
	if (tab.find(c) == std::string::npos)
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	return (0);

}

int	manageChar(std::string str, t_struct &data)
{
	if (str.size() != 3 || str[str.size() - 1] != '\'')
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	data.c = str[1];
	data.i = static_cast<int> (data.c);
	data.f = static_cast<float> (data.c);
	data.d = static_cast<double> (data.c);
	return (0);
}

int	manageInt(std::string str, t_struct &data)
{
	if (firstCharError(str[0]))
		return (1);
	std::stringstream input(str);

	input >> data.i;
	if (!input.eof() || input.fail())
	{
		std::cerr << "Error argument" << std::endl;
		return (1);
	}
	data.c = static_cast<char> (data.i);
	data.f = static_cast<float> (data.i);
	data.d = static_cast<double> (data.i);
	return (0);
}

int	manageFloat(std::string str, t_struct &data)
{

	std::stringstream input(str);
	if (str == "+inff")
		data.f = std::numeric_limits<float>::infinity();
	else if (str == "-inff")
		data.f = -std::numeric_limits<float>::infinity();
	else if (str == "nanf")
		data.f = std::numeric_limits<float>::quiet_NaN();
	else
	{
		if (firstCharError(str[0]))
			return (1);
		input >> data.f;
		char c;
		input.get(c);
		input.get(c);
		if (!input.eof())
		{
			std::cerr << "Error argument" << std::endl;
			return (1);
		}
	}
	data.c = static_cast<char> (data.f);
	data.i = static_cast<int> (data.f);
	data.d = static_cast<double> (data.f);
	return (0);
}

int	manageDouble(std::string str, t_struct &data)
{
	std::stringstream input(str);
	if (str == "+inf")
		data.d = std::numeric_limits<double>::infinity();
	else if (str == "-inf")
		data.d = -std::numeric_limits<double>::infinity();
	else if (str == "nan")
		data.d = std::numeric_limits<double>::quiet_NaN();
	else
	{
		if (firstCharError(str[0]))
			return (1);
		input >> data.d;
		char c;
		input.get(c);
		input.get(c);
		if (!input.eof())
		{
			std::cerr << "Error argument" << std::endl;
			return (1);
		}
	}
	data.c = static_cast<char> (data.d);
	data.f = static_cast<float> (data.d);
	data.i = static_cast<int> (data.d);
	std::cout << data.i << std::endl;
	return (0);
}

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
		c = static_cast<char>str[0];
	
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