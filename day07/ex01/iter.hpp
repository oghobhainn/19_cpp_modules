#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template< typename T >
void	iter( T *array, unsigned int size, void (*f)(T const &x))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template< typename T >
void	iter( T *array, unsigned int size, void (*f)(T &x))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template< typename T >
void	iter( T *array, unsigned int size, void (*f)(T x))
{
	for (unsigned int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

template< typename T>
void	increment(T &x)
{
	x += 1;
}

template< typename T>
void	decrement(T &y)
{
	y -= 1;
}

#endif