#include "Span.hpp"
#include <math.h>
#include <time.h>
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

void	tests(int size)
{
	std::cout << "Size = " << size << std::endl;
	Span big = Span(size);
	std::vector<int> source;
	for (int i = 0; i < size; i++)
		source.push_back(rand());
	big.addNumber(source.begin(), source.end());
	std::cout << "Shortest span = " << big.shortestSpan() << std::endl;
	std::cout << "Biggest span = " << big.longestSpan() << std::endl << std::endl;
}

int main()
{
	srand(time(NULL));

	std::cout << BPURPLE"Main du sujet :"BWHITE << std::endl << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl << BPURPLE"Mes tests persos :"BWHITE << std::endl << std::endl;
	tests(100);
	tests(1000);
	tests(10000);
	tests(100000);
	return 0;
}