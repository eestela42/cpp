#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <class T, class fct>
void	iter(T &tab, int size, fct f1)
{
	int i = 0;

	while (i < size)
		f1(tab[i++]);
}

#endif