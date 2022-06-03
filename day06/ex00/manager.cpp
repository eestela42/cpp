#include "struct.hpp"

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