#ifndef LIGHTSABER_HPP
#define LIGHTSABER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class LightSaber : public AWeapon
{
	public:
		LightSaber( void );
		LightSaber( LightSaber const & );
		virtual ~LightSaber( void );

		LightSaber & operator=(LightSaber const &);

		virtual void attack( void ) const;
	
	private:

};

#endif