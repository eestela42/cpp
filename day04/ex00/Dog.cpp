#include "Dog.hpp"

Dog::Dog(/* args */)
{
	this->type = "Dog";
}

Dog::~Dog()
{
}

Dog	&Dog::operator=(Dog &rsa)
{
	this->type = rsa.getType();
	return (*this);
}
void	Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf *slurp*" << std::endl;
}