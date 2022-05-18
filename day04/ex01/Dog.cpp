#include "Dog.hpp"

Dog::Dog(/* args */)
{
	std::cout << "Dog default costructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog &tmp) : Animal()
{
	std::cout << "Dog copy costructor" << std::endl;
	this->type = tmp.type;
	this->brain = new Brain(*tmp.brain);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog &rsa)
{
	this->type = rsa.getType();
	*this->brain = *rsa.brain;
	return (*this);
}
void	Dog::makeSound() const
{
	std::cout << "Ouaf Ouaf *slurp*" << std::endl;
}