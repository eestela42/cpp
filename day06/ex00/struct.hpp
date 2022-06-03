#ifndef STRUCT_HPP
# define STRUCT_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <limits.h>
#include <math.h>
#include <iomanip>

typedef struct s_struct
{
	char	c;
	int		i;
	float	f;
	double	d;
}				t_struct;

int	manageChar(std::string str, t_struct &data);
int	manageInt(std::string str, t_struct &data);
int	manageFloat(std::string str, t_struct &data);
int	manageDouble(std::string str, t_struct &data);

#endif