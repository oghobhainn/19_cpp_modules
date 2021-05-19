#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <iterator>

template < typename T >
class MutantStack : public std::stack< T >
{
	public:
		MutantStack() : std::stack<T>()
		{
			std::cout << "new mutant stack" << std::endl;
		}

		virtual ~MutantStack()
		{
			std::cout << "good bye, mutant ! you were beautiful" << std::endl;
		}

		MutantStack(MutantStack const & other) : std::stack<T>(other)
		{
		}

		MutantStack & operator=(MutantStack const & other)
		{
			if (this != &other)
				return *this;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin()
		{
			return this->c.begin();
		};

		iterator end()
		{
			return this->c.end();
		};

	private:

};

#endif