#ifndef FEATHER_HPP
#define FEATHER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class Feather : public AWeapon
{
	public:
		Feather( void );
		Feather( Feather const & );
		virtual ~Feather( void );

		Feather & operator=(Feather const &);

		virtual void attack( void ) const;
	
	private:

};

#endif