#include "Animal.hpp"

Animal::Animal(/* args */) : type("")
{
	std::cout << "Animal default costructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor" << std::endl;
}

Animal::Animal( Animal &tmp)
{
	std::cout << "Animal copy costructor" << std::endl;
	this->type = tmp.type;
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