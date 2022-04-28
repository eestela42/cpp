#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Didi was created using no arg" << std::endl;
	this->initDiamond("Didi");
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << "was destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "DiamondTrap" << str << " was created using a string" << std::endl;
	this->initDiamond(str);
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << "DiamondTrap" << tmp._name << " was created using copy" << std::endl;
	this->_name = tmp._name;
	ClapTrap::_name = tmp._name + "_clap_name";
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	this->_attackDamage = tmp._attackDamage;
}

void	DiamondTrap::initDiamond(const std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
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