#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal
{
private:
	/* data */
public:
	Cat(/* args */);
	~Cat();

	Cat	&operator=(Cat &rsa);

	virtual void	makeSound() const;
};


#endif