#include "Zombie.hpp"

		Zombie::Zombie(){
	std::cout << "The Zombie " << this->name << " has spawned. Be carefull" << std::endl;
}

		Zombie::~Zombie(){
	std::cout << "The Zombie " << this->name << " has despawned." << std::endl;
}

void	Zombie::nameZombie(std::string str){
	this->name = str;
}

void	Zombie::announce(void)	const	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
