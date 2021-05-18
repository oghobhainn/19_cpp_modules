#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template< typename T = int >
class Array
{
	public:
		Array( void ) : m_array(new T[0]), m_size(0)
		{
		}

		Array( unsigned int n) : m_array(new T[n]), m_size(n)
		{
			for (unsigned int i = 0; i < n; i++)
				m_array[i] = 0;
		}

		Array( Array const & other) :
			m_array(new T[other.m_size]),
			m_size(other.m_size)
		{
			for (unsigned int i = 0; i < m_size ; i++)
				m_array[i] = other.m_array[i];
		}

		virtual ~Array()
		{
			if (m_array)
				delete [] m_array;
		}
		
		Array	& operator=(Array const & other)
		{
			delete [] m_array;
			m_size = other.m_size;
			m_array = new T[m_size];
			for ( unsigned int i = 0; i < m_size; i++)
				m_array[i] = other.m_array[i];
			return *this;
		}
		T & operator[]( unsigned int n ) const
		{
			if (n >= m_size)
				throw std::exception();
			return m_array[n];
		}

		T * const &	getArray() const { return this->m_array; }
		unsigned int getSize() const { return this->m_size; };
	protected:

	private:
		T *				m_array;
		unsigned int	m_size;

};

template< typename T >
std::ostream & operator<<( std::ostream & out, Array< T > const & rhs)
{
	out << rhs.getArray();
	return out;
}

#endif