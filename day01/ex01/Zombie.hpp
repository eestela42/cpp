#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>


class Zombie	{

public:
			Zombie(void);
			~Zombie(void);
	void	nameZombie(std::string str);
	void	announce(void)const;

private:
	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
