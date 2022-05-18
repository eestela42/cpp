#include "Cat.hpp"

Cat::Cat(/* args */)
{
	std::cout << "Cat default costructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &tmp)
{
	std::cout << "Cat copy costructor" << std::endl;
	this->type = tmp.type;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
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
