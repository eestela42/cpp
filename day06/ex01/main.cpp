#include <iostream>
#include <stdint.h>
#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	*data = new Data;

	data->i = 5;
	data->c = 'a';
	data = deserialize(serialize(data));
	std::cout << data->i << "  " << data->c << std::endl;
	delete data;

}