#include "Span.hpp"

Span::Span(unsigned int maxSize) :
	m_size(0),
	m_maxSize(maxSize)
{}

Span::~Span() {}

unsigned int	Span::getSize( void ) const { return this->m_size; }

std::vector<int>	Span::getVct( void ) const { return this->m_vct; }

void	Span::incrementSize( void ) { this->m_size += 1; }

Span & Span::operator=(Span const & other)
{
	m_size = other.m_size;
	m_maxSize = other.m_maxSize;
	for (unsigned int i = 0; i < other.m_size; i++)
		m_vct.push_back(other.m_vct[i]);
	return *this;
}

void	Span::addNumber( int start, int end)
{
	if (end - start >= 0)
	{
		while (start <= end)
		{
			if (this->getSize() < this->m_maxSize)
			{
				this->m_vct.push_back(start);
				this->incrementSize();
				start++;
			}
			else
			{
				throw std::exception();
			}
			
		}
	}
	else
	{
		throw std::exception();
	}
	
}

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

int		Span::longestSpan() const
{
	if (this->getSize() > 1)
	{
		int shortest = *std::max_element(m_vct.begin(), m_vct.end()) - *std::min_element(m_vct.begin(), m_vct.end());
		return shortest;
	}
	else
	{
		throw std::exception();
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

int		Span::shortestSpan( void ) const
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
