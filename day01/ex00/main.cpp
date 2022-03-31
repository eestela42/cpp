#include "Zombie.hpp"

int	main()
{
	Zombie	Marc("Marc");
	Zombie*	Tibs;

	Marc.announce();
	Tibs = newZombie("Tibs");
	Tibs->announce();
	randomChump("Kyky");
	delete(Tibs);
}