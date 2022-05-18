#include "Dog.hpp"

Dog::Dog(/* args */)
{
	std::cout << "Dog default costructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &tmp)
{
	std::cout << "Dog copy costructor" << std::endl;
	this->type = tmp.type;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
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