#include "WrongDog.hpp"

WrongDog::WrongDog(/* args */)
{
	std::cout << "WrongDog default costructor" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog(WrongDog &tmp)
{
	std::cout << "WrongDog copy costructor" << std::endl;
	this->type = tmp.type;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog default destructor" << std::endl;
}

WrongDog	&WrongDog::operator=(WrongDog &rsa)
{
	this->type = rsa.getType();
	return (*this);
}
void	WrongDog::makeSound() const
{
	std::cout << "Ouaf Ouaf *slurp*" << std::endl;
}