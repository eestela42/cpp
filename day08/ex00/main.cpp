#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <time.h>
#include <math.h>
#include "easyFind.hpp"


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

int	main()
{
	std::vector<int>	vec;
	std::list<int>		lis;
	int					nb;
	int					modulo = 15;

	for(int i = 0; i < 10; i++)
	{
		nb = rand() % modulo;
		vec.push_back(nb);
		lis.push_back(nb);
	}

	srand(time(NULL));
	nb = rand() % modulo;

	std::cout << BWHITE"Test avec le vecteur :" <<std::endl;
	for (std::vector<int>::iterator itv = vec.begin(); itv != vec.end(); itv++)
		std::cout << *itv << " ";
	std::cout << std::endl;
	if (easyFind(vec, nb) != 0)
		std::cout << nb << BGREEN" a ete trouve !"BWHITE << std::endl;
	else
		std::cout << nb << BRED" n'a PAS ete trouve"BWHITE << std::endl;

	std::cout << std::endl << "Test avec la liste :" <<std::endl;
	for (std::list<int>::iterator itl = lis.begin(); itl != lis.end(); itl++)
		std::cout << *itl << " ";
	std::cout << std::endl;
	if (easyFind(lis, nb) != 0)
		std::cout << nb << BGREEN" a ete trouve !"BWHITE << std::endl;
	else
		std::cout << nb << BRED" n'a PAS ete trouve"BWHITE << std::endl;
	return 0;
}

// int	main()
// {
// 	int		sample[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	std::list<int> lst(sample, sample);
// 	std::vector<int> vec(sample, sample);
// 	std::deque<int> dq(sample, sample);

// 	std::cout << "Test on list" << std::endl;
// 	if (easyFind(lst, 4) != 0)
// 		std::cout << "-Found" <<std::endl;
// 	else
// 		std::cout << "---NotFound" <<std::endl;
	
// 	std::cout << "Test on vector" << std::endl;
// 	if (easyFind(vec, 9) != 0)
// 		std::cout << "-Found" <<std::endl;
// 	else
// 		std::cout << "---NotFound" <<std::endl;

// 	std::cout << "Test on deque" << std::endl;
// 	if (easyFind(dq, 13) != 0)
// 		std::cout << "-Found" <<std::endl;
// 	else
// 		std::cout << "---NotFound" <<std::endl;

// }