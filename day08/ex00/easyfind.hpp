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


template< class ContainerModel >
int	& easyfind(ContainerModel & lhs, int rhs)
{
	typename ContainerModel::iterator it = lhs.begin();
	typename ContainerModel::iterator ite = lhs.end();
	typename ContainerModel::iterator x = std::find(it, ite, rhs);
	if (x == ite)
		throw (std::exception());
	return *x;
}

#endif
