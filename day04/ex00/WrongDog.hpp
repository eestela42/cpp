#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:
	/* data */
public:
	WrongDog(/* args */);
	WrongDog(WrongDog &tmp);
	~WrongDog();

	WrongDog	&operator=(WrongDog &rsa);

	void	makeSound() const;
};




#endif