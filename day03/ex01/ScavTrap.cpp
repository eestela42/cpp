#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap is born with its no arg constructor" << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap is born with its string constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &tmp)
{
	std::cout << "ScavTrap is born with its copy constructor" << std::endl;
	this->_name = tmp.getName();
	this->_hitPoints = tmp.getStat("HP");
	this->_energyPoints = tmp.getStat("EP");
	this->_attackDamage = tmp.getStat("AD");
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rsh)
{
	*this = rsh;
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints<= 0)
	{
		std::cout << this->getName() << " feels weak because he tried to "
		<< target << " attack but can't." << std::endl;
		return ;
	}
	std::cout << this->getName() << " shows who's the boss to " << target
	<< " who looses " << this->_attackDamage << " hit points." << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " is now in Gate keeper mode. Don't try him !" << std::endl;
}