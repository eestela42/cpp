#include "Cat.hpp"

Cat::Cat(/* args */)
{
	std::cout << "Cat default costructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(Cat &tmp) : Animal()
{
	std::cout << "Cat copy costructor" << std::endl;
	this->type = tmp.type;
	this->brain = new Brain(*tmp.brain);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(Cat &rsa)
{
	this->type = rsa.getType();
	*this->brain = *rsa.brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaouw miaouw *se frotte le museau*" << std::endl;
}
