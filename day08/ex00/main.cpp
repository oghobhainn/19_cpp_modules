#include "easyfind.hpp"

template< class ContainerModel >
int	 easyfind(ContainerModel & lhs, int & rhs);

int main( void )
{
	std::list<int>			lst;
	std::vector<int>		vct;
	std::deque<int>			deq(5);

	lst.push_back(17);
	lst.push_back(42);
	lst.push_back(13);
	lst.push_back(17);
	lst.push_back(89);
	lst.push_back(1);

	vct.push_back(1);
	vct.push_back(17);
	vct.push_back(42);
	vct.push_back(13);
	vct.push_back(17);
	vct.push_back(89);

	deq.push_back(1);
	deq.push_back(17);
	deq.push_back(42);
	deq.push_back(13);
	deq.push_back(17);
	deq.push_back(89);

	int a = easyfind(lst, 17);
	int b = easyfind(vct, 13);
	int c = easyfind(deq, 89);

	int d = easyfind(lst,100);
	int f = easyfind(vct,100);
	int g = easyfind(deq,100);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "f : " << f << std::endl;
	std::cout << "g : " << g << std::endl;

	return (0);
}