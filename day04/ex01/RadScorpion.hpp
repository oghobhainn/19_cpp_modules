#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion( void );
		RadScorpion( RadScorpion const & );
		virtual ~RadScorpion( void );

		RadScorpion & operator=(RadScorpion const &);

		std::string	getType( void ) const;
	
	private:

};

#endif