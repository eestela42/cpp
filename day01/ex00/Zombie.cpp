#include "Zombie.hpp"

Zombie::Zombie(std::string	str)	:	name(str)	{
	std::cout << "The Zombie " << this->name << " has spawned. Be carefull" << std::endl;
}

Zombie::~Zombie()	{
	std::cout << "The Zombie " << this->name << " has despawned." << std::endl;
}

void Zombie::announce(void)	const	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


