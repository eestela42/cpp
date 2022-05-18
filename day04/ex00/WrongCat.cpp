#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "WrongCat default costructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &tmp)
{
	std::cout << "WrongCat copy costructor" << std::endl;
	this->type = tmp.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat &rsa)
{
	this->type = rsa.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouw miaouw *se frotte le museau*" << std::endl;
}
