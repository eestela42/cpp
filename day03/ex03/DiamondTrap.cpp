#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Didi was created using no arg" << std::endl;
	this->_name = "Didi";
	ClapTrap::_name = "Didi_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap " << name << " was created using a string" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << "DiamondTrap " << tmp._name << " was created using copy" << std::endl;
	this->_name = tmp._name;
	ClapTrap::_name = tmp._name + "_clap_name";
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	this->_attackDamage = tmp._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &tmp)
{
	std::cout << "DiamondTrap operator = called" << std::endl;
	_attackDamage = tmp._attackDamage;
	_name = tmp._name;
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who Am I... ?" << std::endl;
	std::cout << "Name : " << this->_name << std::endl;
	std::cout << "Clap name : " << this->ClapTrap::_name<< std::endl;
	std::cout << "HP : " << this->_hitPoints << std::endl;
	std::cout << "AD : " << this->_attackDamage << std::endl;
	std::cout << "Ep : " << this->_energyPoints << std::endl;

}