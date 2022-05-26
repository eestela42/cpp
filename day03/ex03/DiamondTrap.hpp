#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &tmp);
		void	initDiamond(const std::string name);

		DiamondTrap	&operator=(const DiamondTrap &rsh);
		using ScavTrap::attack;
		void	whoAmI();

};

#endif