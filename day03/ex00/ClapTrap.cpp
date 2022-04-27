#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
	std::cout << "ClapTrap no arg constructor called" << std::endl;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_hitPoints = 10;
	this->_name = "ClapTrap";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_hitPoints = 10;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_attackDamage = tmp._attackDamage;
	this->_energyPoints = tmp._energyPoints;
	this->_hitPoints = tmp._hitPoints;
	this->_name = tmp._name;
}

ClapTrap &ClapTrap::operator=(ClapTrap &tmp)
{
	std::cout << "ClapTrap operator= called" << std::endl;
	*this = tmp;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << this->_name << " tries to attack but can't" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ". He looses "
		<< this->_attackDamage << " HP." << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << this->_name << " tries to repair but can't" << std::endl;
		return ;
	}
	std::cout << this->_name << " repairs. He gains " << amount << " hit points."
	<< std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}

