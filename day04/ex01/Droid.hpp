#ifndef DROID_HPP
#define DROID_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class Droid : public Enemy
{
	public:
		Droid( void );
		Droid( Droid const & );
		virtual ~Droid( void );

		Droid & operator=(Droid const &);

		std::string	getType( void ) const;
	
	private:

};

#endif