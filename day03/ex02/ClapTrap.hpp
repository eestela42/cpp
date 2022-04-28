#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
protected:
	std::string	_name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;

public:
	ClapTrap(/* args */);
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &tmp);

	std::string	getName();
	int			getStat(const std::string str);
	void		setName(const std::string name);
	void		setStat(const std::string str, const int value);

	ClapTrap	&operator=(ClapTrap &rsh);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};




#endif