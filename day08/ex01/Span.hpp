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
		Span(int n);
		virtual ~Span();
		Span( Span const & other );

		unsigned int	getSize( void ) const;
		void			incrementSize( void );

		//Span & operator=( Span const & rhs );

		void	addNumber( int n );
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		Span();
		unsigned int		m_size;
		unsigned int		m_maxSize;
		std::vector<int>	m_vct;
};

#endif