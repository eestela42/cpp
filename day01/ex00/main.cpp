#include "Zombie.hpp"

int	main()
{
	Zombie	Marc("Marc");
	Zombie*	Tibs;

	Marc.announce();
	Tibs = newZombie("Tibs");
	if (Tibs)
	{
		Tibs->announce();
		delete(Tibs);
	}
	randomChump("Kyky");
}