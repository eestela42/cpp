#include "Contact.hpp"

std::string Contact::getName()const
{
	return (name);
}

std::string Contact::getLast_name()const
{
	return (last_name);
}

std::string Contact::getNickname()const
{
	return (nickname);
}

std::string Contact::getPhone_number()const
{
	return (phone_number);
}

std::string Contact::getDarkest_secret()const
{
	return (darkest_secret);
}

void	Contact::setName(std::string str)
{
	this->name = str;
}

void	Contact::setLast_name(std::string str)
{
	this->last_name = str;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::setDarkest_secret(std::string str)
{
	this->darkest_secret = str;;
}
