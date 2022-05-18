#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat(/* args */);
	Cat(Cat &tmp);
	~Cat();

	Cat	&operator=(Cat &rsa);

	virtual void	makeSound() const;
};


#endif