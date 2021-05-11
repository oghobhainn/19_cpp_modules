#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine( TacticalMarine const & );
		virtual ~TacticalMarine();

		TacticalMarine & operator=(TacticalMarine const &);

		ISpaceMarine*	clone( void ) const;
		void			battleCry( void ) const;
		void			rangedAttack( void ) const;
		void			meleeAttack( void ) const; 

};

#endif