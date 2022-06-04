#include "Span.hpp"

Span::Span() : size(0)
{}

Span::Span(unsigned int i) : size(i)
{}


void	Span::addNumber(int num)
{
	if (this->data.size() >= this->size)
		throw std::exception();
	this->data.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	unsigned int n = 0;
	while (it != ite && n++ < this->size)
	{
		this->data.push_back(*it);
		it++;
	}
}

int		Span::shortestSpan()
{
	std::sort(this->data.begin(), this->data.end());
	if (this->data.size() < 2)
		throw std::exception();
	int	min = data[1] - data[0];
	int tmp;
	for (std::vector<int>::iterator it = this->data.begin() +1; it != data.end(); it++)
	{
		tmp = *it - *(it-1);
		if (tmp < min)
			min = tmp;
	}
	return (min);
}

int		Span::longestSpan()
{
	std::sort(this->data.begin(), this->data.end());
	if (this->data.size() < 2)
		throw std::exception();
	return (*(this->data.end() - 1) - *this->data.begin());
}

std::vector<int>	Span::getData()
{
	return (this->data);
}

std::ostream &operator<<(std::ostream &out, Span &tmp)
{
	std::vector<int> base = tmp.getData();
	std::vector<int>::iterator ite = base.end();
	for (std::vector<int>::iterator it = base.begin(); it != ite; it++)
		out << *it << " " << std::endl;
	return (out);
}