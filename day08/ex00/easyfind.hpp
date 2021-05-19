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
int	 easyfind(ContainerModel & lhs, int rhs)
{
	typename ContainerModel::iterator it;
	typename ContainerModel::iterator ite = lhs.end();
	//int ans = -1;
	int ix = 0;
	try
	{
		for (it = lhs.begin(); it != ite; it++)
		{
			if (*it == rhs)
			{
				return ix;
				//ans = *it;
				//return ans;
			}
			ix++;
		}
		throw (std::exception());
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	return -1;
}

#endif