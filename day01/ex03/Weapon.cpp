#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)	{
}

Weapon::~Weapon()
{
}

std::string const &	Weapon::getType()	{
	return (this->_type);
}

void			Weapon::setType(std::string str)	{
	this->_type = str;
}
