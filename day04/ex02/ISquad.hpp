#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"
class ISquad
{
	public:
		virtual ~ISquad( void ) {};
		virtual int getCount( void ) const = 0; // returns the number of units currently in the squad
		virtual ISpaceMarine* getUnit( int i ) const = 0; // returns a pointer to the n-th unit, nullptr if out-of-bonds index
		virtual int push( ISpaceMarine* unit) = 0; // adds the unit in the squad, and returns the number of units already in it (adding null unit or already existig is forbidden)
};

#endif