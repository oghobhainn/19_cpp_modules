#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( TacticalMarine const &other)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = other;
}

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void	TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}