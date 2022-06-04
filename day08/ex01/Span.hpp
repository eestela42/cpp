#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <math.h>
# include <algorithm>

class Span
{
	private :
		std::vector<int>	data;
		unsigned int		size;
	public :
		Span();
		Span(unsigned int n);
		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		int		shortestSpan();
		int		longestSpan();
		std::vector<int> getData();
};

std::ostream &operator<<(std::ostream &out, Span &tmp);

#endif