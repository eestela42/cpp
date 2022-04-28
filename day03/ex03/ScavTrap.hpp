#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &tmp);

	ScavTrap	&operator=(const ScavTrap &rsh);

	void	attack(const std::string& target);
	void 	guardGate();
};

#endif