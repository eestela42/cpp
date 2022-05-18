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

ClapTrap::ClapTrap(ClapTrap &tmp)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_attackDamage = tmp.getStat("AD");
	this->_energyPoints = tmp.getStat("EP");
	this->_hitPoints = tmp.getStat("HP");
	this->_name = tmp.getName();
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

int			ClapTrap::getStat(const std::string str)
{
	if (str == "EP")
		return (this->_energyPoints);
	if (str == "AD")
		return (this->_attackDamage);
	if (str == "HP")
		return (this->_hitPoints);
	return (-1);
}

void	ClapTrap::setStat(const std::string str, const int value)
{
	if (str == "EP")
		this->_energyPoints = value;
	if (str == "AD")
		this->_attackDamage = value;
	if (str == "HP")
		this->_hitPoints = value;
}

ClapTrap &ClapTrap::operator=(ClapTrap &tmp)
{
		std::cout << "ClapTrap operator = called" << std::endl;
	_attackDamage = tmp._attackDamage;
	_name = tmp._name;
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << this->_name << " tries to attack but can't" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << " who looses "
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

