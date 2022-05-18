#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(Brain &tmp);
	~Brain();

	Brain &operator=(Brain &tmp);
};





#endif