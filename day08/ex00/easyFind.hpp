#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
# include <string>
# include <algorithm>
# include <iterator>

template <typename T>
int	easyFind(T &cont, int n)
{
	typename T::iterator p;
	p = std::find(cont.begin(), cont.end(), n);
	if (p != cont.end())
		return (1);
	return (0);
}

#endif