#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class weapon
{
private:
	std::string	type;
public:
	weapon();
	~weapon();
	std::string &	getType()const;
	void			setType(std::string str);
};

weapon::weapon()
{
}

weapon::~weapon()
{
}

std::string &	weapon::getType()const	{
	return (this->type);
}

void			weapon::setType(std::string str)	{
	this->type = str;
}
#endif