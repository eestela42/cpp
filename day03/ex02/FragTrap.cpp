#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	std::cout << "A FragTrap has spawned with no arg, he is named Fragy" << std::endl;
	this->_name = "Fragy";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "A FragTrap has despawned, he was named " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "A FragTrap has spawned with string, he is named " << str << std::endl;
	this->_name = str;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &tmp)
{
	std::cout << "A FragTrap has spawned with copy, he is also named " << tmp._name << std::endl;
	this->_name = tmp._name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &tmp)
{
	std::cout << "FragTrap operator = called" << std::endl;
	_attackDamage = tmp._attackDamage;
	_name = tmp._name;
	this->_hitPoints = tmp._hitPoints;
	this->_energyPoints = tmp._energyPoints;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::string	str= "";

	
	std::cout << this->_name << " : Do you want to HIGH FIVE ma man ? (yes/no)" << std::endl;
	std::getline(std::cin, str);
	if (str == "yes")
		std::cout << "*CLAP*" << std::endl << "YES ! Nice broo !" << std::endl;
	else if (str == "no")
		std::cout << "*self CLAP*" << std::endl << "No problem ma mannn" << std::endl;
	else
		std::cout << "*little CLAP*" << std::endl
		<< "Yea good job MAN, is it your first one ? You don't seem familiar with this aha"
		<< std::endl;
	std::getline(std::cin, str);
	return ;
}