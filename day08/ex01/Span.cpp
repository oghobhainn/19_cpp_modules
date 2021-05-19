#include "Span.hpp"

Span::Span(unsigned int maxSize) :
	m_size(0),
	m_maxSize(maxSize)
{}

Span::Span() {}

Span::~Span() {}

unsigned int		Span::getSize( void ) const { return this->m_size; }

std::vector<int>	Span::getVct( void ) const { return this->m_vct; }

void				Span::incrementSize( void )
{
	this->m_size += 1;
}

/*
Span & Span::operator=(Span const & rhs)
{

}
*/

void	Span::addNumber( int n )
{
	try
	{
		if (this->getSize() < this->m_maxSize)
		{
			this->m_vct.push_back(n);
			this->incrementSize();
		}
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't add any more numbers" << std::endl;
	}
}

void	Span::addNumber( std::vector<int>::iterator start, std::vector<int>::iterator end, int n)
{
	try
	{
		while ( start != end || this->getSize() < this->m_maxSize)
		{
			std::cout << "salut !" << std::endl;
			if ( this->getSize() < this->m_maxSize )
			{
				this->m_vct.push_back(n);
				this->incrementSize();
			}
			else
			{
				throw std::exception();
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Can't add any more numbers" << std::endl;
	}
}

int		Span::longestSpan()
{
	std::vector<int>::iterator it = this->m_vct.begin();
	std::vector<int>::iterator ite = this->m_vct.end();

	//std::cout << "size : " << this->getSize() << std::endl;

	try
	{
		if (this->getSize() > 1)
		{

			int shortest = *std::max_element(it, ite) - *std::min_element(it, ite);
			return shortest;
		}
		else
		{
			throw std::exception();
		}
		
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		std::cerr << "not enough numbers to check longest span" << std::endl;
		return -1;
	}
}

static int findShortest( std::vector<int> vct)
{
	int gap;
	int shortest;

	unsigned int i = 1;

	gap = vct.at(1) - vct.at(0);
	shortest = gap;
	while (i < vct.size() - 1)
	{
		gap = vct.at(i + 1) - vct.at(i);
		if (gap < shortest)
			shortest = gap;
		i++;
	}
	return shortest;
}

int		Span::shortestSpan( void )
{

	try
	{
		if (this->getSize() > 1)
		{
			std::vector<int>	copy = this->m_vct;
	
			sort(copy.begin(), copy.end());

			return findShortest(copy);
		}
		else
		{
			throw std::exception();
		}
		
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
		std::cerr << "not enough numbers to check shortest span" << std::endl;
	}
	return -1;

}