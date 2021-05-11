#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	public:
		Squad( void );
		Squad(Squad const &other);
		virtual ~Squad();

		Squad &operator=(Squad const &other);

		int				getCount( void ) const;
		ISpaceMarine	*getUnit( int n ) const;
		int				push(ISpaceMarine *unit);
	
	private:
		int				m_count;
		ISpaceMarine	**m_units;
};

#endif
