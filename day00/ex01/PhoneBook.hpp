#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact Repertory[8];
	int		i;
	int		size;
	void	input_info();
public:
	PhoneBook();
	void	add();
	void	search();
};




#endif