#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "main.hpp"

Base::~Base()
{}

Base * generate(void)
{
	if (rand() % 3 == 1)
	{
		std::cout << "A generated" << std::endl;
		return (new A());
	}
	if (rand() % 3 == 2)
	{
		std::cout << "B generated" << std::endl;
		return (new B());
	}
	std::cout << "C generated" << std::endl;
	return (new C());
		
}
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base tmp;

	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
		try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
		try
	{
		tmp =dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{}
}

int	main()
{
	srand (time(NULL));
	Base *tmp;
	for (int i = 0; i < 10; i++)
	{
		tmp = generate();
		identify(tmp);
		identify(*tmp);
	}
}









