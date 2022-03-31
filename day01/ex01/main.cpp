#include "Zombie.hpp"




int	main()	{
	Zombie*	horde;
	int		N = 12;
	int		i = 0;

	horde = zombieHorde(N, "Mathieu");
	while (i < N)
		horde[i++].announce();
	delete [] horde;
	return (0);
}