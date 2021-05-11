#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class Werewolf : public Enemy
{
	public:
		Werewolf( void );
		Werewolf( Werewolf const & );
		virtual ~Werewolf( void );

		Werewolf & operator=(Werewolf const &);

		void	takeDamage( int amount );
		std::string	getType( void ) const;
	
	private:

};

#endif