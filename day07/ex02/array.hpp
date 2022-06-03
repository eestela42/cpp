#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template<typename T> class Array
{
	private :
		unsigned int	_size;
		T				*_data;
	public :
		Array();
		~Array();
		Array(unsigned int n);
		Array(Array<T> &tmp);
		Array	&operator=(Array<T> &tmp);
		T		&operator[](unsigned int i);
		unsigned int size();
};

/***************Constructors*********/


template <typename T>
Array<T>::Array() : _size(0), _data(NULL)
{}

template <typename T>
Array<T>::~Array()
{
	if (this->_data)
		delete [] this->_data;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[n])
{}

template <typename T>
Array<T>::Array(Array &tmp) : _size(tmp._size), _data(new T[tmp._size])
{
	for (unsigned int i = 0; i < _size; i++)
		this->_data[i] = tmp._data[i];

}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &tmp)
{
	if (*this != tmp)
	{
		this->_size = tmp._size;
		delete [] this->_data;
		this->_data = new T[this->_size];
		for (int i = 0; i < _size; i++)
			this->_data[i] = tmp._data[i];
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_data[i]);
}

template <typename T>
unsigned int Array<T>::size()
{
	return (this->_size);
}

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &tmp)
{
	out << "array[" << tmp.size() << "] : ";
	for (unsigned int i = 0; (i < 10 && i < tmp.size()); i++)
		out << tmp[i] << " ";
	out << std::endl;
	return (out);
}

#endif