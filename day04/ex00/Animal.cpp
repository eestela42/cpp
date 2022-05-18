#include "Animal.hpp"

Animal::Animal(/* args */)
{
}

Animal::~Animal()
{
}

Animal::Animal( Animal &tmp)
{
	this->type = tmp.getType();
}

std::string	Animal::getType() const
{
	return (this->type);
}

Animal	&Animal::operator=(Animal &rsa)
{
	this->type = rsa.getType();
	return(*this);
}

void	Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;
}