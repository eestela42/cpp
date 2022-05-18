#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	num1;
	ClapTrap	num2("Joeh Bideon");
	ClapTrap	num3 = num2;
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
	num0.attack("a trash can");
}