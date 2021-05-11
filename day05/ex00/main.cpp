#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bob("bob");
	std::cout << bob << std::endl;
	bob.increment();
	std::cout << bob << std::endl;
	bob.decrement();
	std::cout << bob << std::endl;
	bob.decrement();

	return 0;
}