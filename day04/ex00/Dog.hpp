#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();

	Dog	&operator=(Dog &rsa);

	virtual void	makeSound() const;
};




#endif