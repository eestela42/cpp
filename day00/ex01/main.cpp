#include "PhoneBook.hpp"

int	main()
{
	PhoneBook 	PhoneBook;
	std::string	str= "";

	while (str != "EXIT")
	{
		std::cout << "waiting..." << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			str = "";
			 std::cin.clear();
		}
		if (str == "ADD")
			PhoneBook.add();
		else if (str == "SEARCH")
			PhoneBook.search();
		else if (str != "EXIT")
			std::cout << "I don't understand." << std::endl;
	}
	return (0);
}