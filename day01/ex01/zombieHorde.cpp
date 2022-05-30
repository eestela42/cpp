#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )	{
	int		i = 0;
	if (N <= 0)
	{
		std::cout << "Their isn't enough zombie to make an horde" << std::endl;
		return (NULL);
	}
	Zombie*	horde = new Zombie[N];
	while (i < N)
		horde[i++].nameZombie(name);
	return (horde);
}