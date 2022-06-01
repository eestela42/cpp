#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		delete i;
		delete j;
		Dog Billy;
		Cat	Charlie;
		std::cout << std::endl;
		Billy.makeSound();
		Charlie.makeSound();
		std::cout << std::endl;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();
		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		delete i;
		delete j;
		WrongDog Billy;
		WrongCat	Charlie;
		std::cout << std::endl;
		Billy.makeSound();
		Charlie.makeSound();
		std::cout << std::endl;
	}
	return 0;
}