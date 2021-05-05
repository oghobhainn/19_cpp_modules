#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle( void );
		PlasmaRifle( PlasmaRifle const & );
		~PlasmaRifle( void );

		PlasmaRifle & operator=(PlasmaRifle const &);

		virtual void attack( void ) const;
	
	private:

};

#endif