#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal default costructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal &tmp)
{
	std::cout << "WrongAnimal copy costructor" << std::endl;
	this->type = tmp.getType();
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal &rsa)
{
	this->type = rsa.getType();
	return(*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal noises*" << std::endl;
}