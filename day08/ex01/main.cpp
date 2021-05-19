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
		if (sp2.shortestSpan() != -1)
			std::cout << "shortest span 2 : " << sp2.shortestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}
	try
	{	
		if (sp2.longestSpan() != -1)
			std::cout << "longest span 2 : " << sp2.longestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}

	std::cout << std::endl << "======== BIG CASE =========" << std::endl;

	Span sp3 = Span(11500);
	int random;
	for (int i = 0; i < 11500; i++)
	{
		random = std::rand() % 1000 + 1;
		sp3.addNumber(random);
	}
	std::cout << "sp3 size is now : " << sp3.getSize() << std::endl;
	try
	{
		if (sp3.shortestSpan() != -1)
			std::cout << "shortest span 3 : " << sp3.shortestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}
	try
	{	
		if (sp3.longestSpan() != -1)
			std::cout << "longest span 3 : " << sp3.longestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}

	std::cout << std::endl << "======== BIG CASE ITERATOR =========" << std::endl;
	Span sp4 = Span(12);
	
	// quid de la range d'iterators ??
	// a quoi ca sert ? pq pqs range d'int ?

	std::vector<int>::iterator it = sp4.getVct().begin();
	std::vector<int>::iterator ite = sp4.getVct().end();
	sp4.addNumber( it, ite, 42 );

	std::cout << "sp4 size is now : " << sp4.getSize() << std::endl;
	try
	{
		if (sp3.shortestSpan() != -1)
			std::cout << "shortest span 4 : " << sp4.shortestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}
	try
	{	
		if (sp3.longestSpan() != -1)
			std::cout << "longest span 4 : " << sp4.longestSpan() << std::endl;
		else
			throw std::exception();	
	}
	catch(const std::exception& e){}

	return 0;
}
