#include "MutantStack.hpp"
#include <list>
# define WHITE "\033[0m"
# define BWHITE "\033[1;37m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"


void	test_list(void)
{
	std::cout << BBLUE"je reprends le main du sujet, mais em remplacant la MutantStack par une list :"BWHITE << std::endl << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	test_string(void)
{
	MutantStack<std::string> example;

	example.push("manger");
	example.push("pour");
	example.push("vivre");

	MutantStack<std::string>::iterator	it = example.begin();
	MutantStack<std::string>::iterator	ite = example.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl << WHITE"devient"BWHITE << std::endl;

	MutantStack<std::string>::reverse_iterator	rit = example.rbegin();
	MutantStack<std::string>::reverse_iterator	rite = example.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl << std::endl;
}

void	test_int(void)
{
	MutantStack<int> example;

	example.push(0);
	example.push(1);
	example.push(2);
	example.push(3);
	example.push(4);
	example.push(5);
	example.push(6);
	example.push(7);
	example.push(8);
	example.push(9);

	MutantStack<int>::iterator	it = example.begin();
	MutantStack<int>::iterator	ite = example.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl << WHITE"devient"BWHITE  << std::endl;

	MutantStack<int>::reverse_iterator	rit = example.rbegin();
	MutantStack<int>::reverse_iterator	rite = example.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl << std::endl;
}

void	test_char(void)
{
	MutantStack<char> example;

	example.push('r');
	example.push('e');
	example.push('p');
	example.push('a');
	example.push('s');

	MutantStack<char>::iterator	it = example.begin();
	MutantStack<char>::iterator	ite = example.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl << WHITE"devient"BWHITE  << std::endl;

	MutantStack<char>::reverse_iterator	rit = example.rbegin();
	MutantStack<char>::reverse_iterator	rite = example.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		rit++;
	}
	std::cout << std::endl << std::endl;
}

void	test_copie(void)
{
	MutantStack<std::string> example;
	example.push("    |\\__/,|   (`\\");
	example.push("  _.|o o  |_   ) )");
	example.push("-(((---(((--------");

	MutantStack<std::string> copy(example);

	MutantStack<std::string>::iterator	it = copy.begin();
	MutantStack<std::string>::iterator	ite = copy.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
}

int main()
{
	std::cout << BPURPLE"Main du sujet :"BWHITE << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << BPURPLE"Mes tests persos :"BWHITE << std::endl << std::endl;
	test_list();
	std::cout << std::endl << BBLUE"Je vais maintenant tester les iterateurs et reverse iterateurs avec differents types :"BWHITE << std::endl << std::endl;
	test_string();
	test_int();
	test_char();
	std::cout << std::endl << BBLUE"Ici j'affiche une MutantStack construite par copie :"BWHITE << std::endl << std::endl;
	test_copie();
	return 0;
}