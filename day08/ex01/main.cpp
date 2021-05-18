#include "Span.hpp"

int main()
{
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
	try
	{
		sp2.addNumber(17);
		sp2.addNumber(45);
		std::cout << "shortest span 2 : " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span 2 : " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
	
}
