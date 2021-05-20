#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
#include <array>
#include <deque>

template< typename T >
int	& easyfind(T & lhs, int rhs)
{
	typename T::iterator it = lhs.begin();
	typename T::iterator ite = lhs.end();
	typename T::iterator x = std::find(it, ite, rhs);
	if (x == ite)
		throw (std::exception());
	return *x;
}

#endif
