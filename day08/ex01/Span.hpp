#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		virtual ~Span();
		Span( Span const & other );

		Span & operator=( Span const & other );

		std::vector<int>	getVct( void ) const;
		unsigned int		getSize( void ) const;
		void				incrementSize( void );


		void	addNumber( int n );
		void	addNumber( std::vector<int>::iterator start, std::vector<int>::iterator end, int n );
		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;

	private:
		Span();
		unsigned int		m_size;
		unsigned int		m_maxSize;
		std::vector<int>	m_vct;
};

#endif
