#include "Cat.hpp"

Cat::Cat(/* args */)
{
	this->type = "Cat";
}

Cat::~Cat()
{
}

Cat	&Cat::operator=(Cat &rsa)
{
	this->type = rsa.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouw miaouw *se frotte le museau*" << std::endl;
}
