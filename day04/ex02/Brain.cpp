#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain &tmp)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = tmp;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain &Brain::operator=(Brain &tmp)
{
	if (this != &tmp)
		for (int i = 0; i <100; i++)
			this->ideas[i] = tmp.ideas[i];
	return (*this);
}