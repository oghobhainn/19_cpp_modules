#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	public:
		Character( std::string const &name );
		Character( Character const & );
		virtual ~Character( void );
		
		Character & operator=(Character const &);

		std::string virtual getName( void ) const;
		AWeapon		virtual *getWeapon( void ) const;
		int			virtual getAp( void ) const;
		int			virtual getMaxAp( void ) const;

		void	recoverAP( void );
		void	equip(AWeapon*);
		void	attack(Enemy*);

	protected:

	private:
		std::string		m_name;
		int				m_ap;
		int				m_maxAp;
		AWeapon*		m_weapon;

		Character( void );

};

std::ostream & operator<<(std::ostream &out, Character const &rhs);

#endif