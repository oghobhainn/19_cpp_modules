#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
class Ice;
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const & other);
		virtual ~Ice();

		Ice &operator=( Ice const &other );

		AMateria *clone( void ) const;
		void use( ICharacter &target);

	protected:

	private:
};

#endif