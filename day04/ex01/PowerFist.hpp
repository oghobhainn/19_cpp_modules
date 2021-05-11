#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist( void );
		PowerFist( PowerFist const & );
		virtual ~PowerFist( void );

		PowerFist & operator=(PowerFist const &);

		virtual void attack( void ) const;
	
	private:

};

#endif