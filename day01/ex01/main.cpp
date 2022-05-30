#include "Zombie.hpp"




int	main()	{
	Zombie*	horde;
	int		N = 12;
	int		i = 0;

	horde = zombieHorde(N, "Mathieu");
	while (i < N)
		horde[i++].announce();
	delete [] horde;
<<<<<<< HEAD
	horde = zombieHorde(-5, "Dider");
=======
	horde = zombieHorde(0, "Mathieu");
>>>>>>> c27eb36010938bcb646b2180c5ef95f54997749d
	return (0);
}