#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
	size = 0;
}

void	PhoneBook::input_info()
{
	std::string	str = "";

	while (str == "")	{
		std::cout << "Enter the name :";
		std::getline(std::cin,str);		}
	Repertory[i].setName(str);
	str = "";
	while (str == "")	{
		std::cout << "Enter the last name :";
		 std::getline(std::cin,str);	}
	Repertory[i].setLast_name(str);
	str = "";
	while (str == "")	{
		std::cout << "Enter the nickname :";
		std::getline(std::cin,str);	}
	Repertory[i].setNickname(str);
	str = "";
	while (str == "")	{
		std::cout << "Enter the phone number :";
		std::getline(std::cin,str);	}
	Repertory[i].setPhone_number(str);
	str = "";
	while (str == "")	{
		std::cout << "Enter the DARKEST SECRET :";
		std::getline(std::cin,str);	}
	Repertory[i].setDarkest_secret(str);
}

void	PhoneBook::add()
{
	input_info();
	i = ++i % 8;
	if (size < 8)
		size++;
}

std::string	get_element(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);

}

void	PhoneBook::search()
{
	int			x = 0;
	std::string	str = "";
	while (x < size)
	{
		std::cout << std::setw(10) << x + 1 << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getName()) << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getLast_name()) << '|';
		std::cout << std::setw(10) << get_element(Repertory[x].getNickname()) << '|';
		std::cout << '\n';
		x++;
	}
	std::cout << "Put the desired index :";
	std::getline(std::cin, str);
	if (str.empty())
		std::cout << "You have enter no index, please SEARCH again." << std::endl;
	else
	{
		x = std::atoi(str.c_str()) - 1;
		if (x >= 0 && x < size)
		{
			std::cout << "Name : " << Repertory[x].getName() << std::endl;
			std::cout << "Last name : " << Repertory[x].getLast_name() << std::endl;
			std::cout << "Cool nickname : " << Repertory[x].getNickname() << std::endl;
			std::cout << "Phone number : " << Repertory[x].getPhone_number() << std::endl;
			std::cout << "Darkest secret : " << Repertory[x].getDarkest_secret() << std::endl;
		}
		else
			std::cout << "Invalide index, please SEARCH again." << std::endl;
	}
}