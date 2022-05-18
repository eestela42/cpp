#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(WrongCat &tmp);
	~WrongCat();

	WrongCat	&operator=(WrongCat &rsa);

	void	makeSound() const;
};


#endif