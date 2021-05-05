#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	public:
		Enemy( int hp, std::string const &type);
		Enemy( Enemy const & );
		virtual ~Enemy( void );

		Enemy & operator=(Enemy const &);

		std::string	virtual getType( void ) const;
		int			virtual getHp( void ) const;
		
		void		virtual takeDamage( int amount);

	protected:
		Enemy( void );
		std::string		m_type;
		int				m_hp;
	
	private:

};

#endif