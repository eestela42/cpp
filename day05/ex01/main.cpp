#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	noob("Noob", 150);
		Bureaucrat	mid("Mid", 75);
		Bureaucrat	master("master", 1);
		Form		low;
		Form		medium("Medium", 75);
		Form		crucial("Crucial", 1);
		Form		tab[3] = {low, medium, crucial};

		std::cout << "TEST : " << master << std::endl << crucial << std::endl;
		for (int i = 0; i < 3; i++)
		{
			noob.signForm(tab[i]);
			mid.signForm(tab[i]);
			master.signForm(tab[i]);
			std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error grade. NO!" << std::endl;
	}
}