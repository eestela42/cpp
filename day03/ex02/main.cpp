#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	num1;
	ClapTrap	num2("Joeh Bideon");
	ClapTrap	num3 = num1;
	ClapTrap	num0(num2);

	int i = 0;
	while (i < 11)
	{
		num1.attack("His mom");
		i++;
	}
	num2.beRepaired(2);
	num3.attack("Joe Biden (verrified account)");
	num3.takeDamage(236);
	num3.beRepaired(1000);

	std::cout << "num4" << std::endl;
	ScavTrap	num4;
	std::cout << "num5" << std::endl;
	ScavTrap	num5("Donut Trompe");
	std::cout << "num6" << std::endl;
	ScavTrap	num6 = num4;
	std::cout << "num7" << std::endl;
	ScavTrap	num7(num5);

	num5.beRepaired(2);
	num6.attack("Racab Odama (fake account)");
	num6.takeDamage(236);
	num6.beRepaired(1000);
	num7.guardGate();

	std::cout << "num8" << std::endl;
	FragTrap	num8;
	std::cout << "num9" << std::endl;
	FragTrap	num9("Donut Trompe");
	std::cout << "num10" << std::endl;
	FragTrap	num10 = num8;
	std::cout << "num11" << std::endl;
	FragTrap	num11(num9);

	num9.beRepaired(2);
	num10.attack("Racab Odama (fake account)");
	num10.takeDamage(236);
	num10.beRepaired(1000);
	num11.highFivesGuys();

}