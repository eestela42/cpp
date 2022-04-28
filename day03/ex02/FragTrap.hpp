#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(/* args */);
	~FragTrap();
	FragTrap(std::string str);
	FragTrap(FragTrap &tmp);

	FragTrap	&operator=(const FragTrap &rsh);

	void	highFivesGuys(void);
};


#endif