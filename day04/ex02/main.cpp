#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *tab[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		delete tab[i];
	std::cout << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << std::endl;
	Dog Chien;
	Chien.makeSound();

	//Animal *MONSTER = new Animal;
}