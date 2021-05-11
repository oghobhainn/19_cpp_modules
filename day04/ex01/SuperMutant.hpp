#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant( void );
		SuperMutant( SuperMutant const & );
		virtual ~SuperMutant( void );

		SuperMutant & operator=(SuperMutant const &);

		void	takeDamage( int amount );
		std::string	getType( void ) const;
	
	private:

};

#endif