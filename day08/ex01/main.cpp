#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{

	std::srand(std::time(0));

	std::cout << "======== GENERAL BEHAVIOUR =========" << std::endl;
	
	Span sp = Span(5);
	std::cout << "sp size is now : " << sp.getSize() << std::endl;
	sp.addNumber(5);
	std::cout << "sp size is now : " << sp.getSize() << std::endl;
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "sp size is now : " << sp.getSize() << std::endl;

	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;

	std::cout << std::endl << "======== TOO SMALL =========" << std::endl;
	Span sp2 = Span(1);
	sp2.addNumber(17);
	sp2.addNumber(45);
	try
	{
		std::cout << "shortest span 2 : " << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{	
		std::cout << "longest span 2 : " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "======== BIG CASE =========" << std::endl;

	Span sp3 = Span(11500);
	try
	{
		sp3.addNumber( 0, 10000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " : adding number failed" << '\n';
	}
	
	std::cout << "sp3 size is now : " << sp3.getSize() << std::endl;

	try
	{
		std::cout << "shortest span 3 : " << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{	
		std::cout << "longest span 3 : " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
