#include "AMateria.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

AMateria::AMateria( std::string const & type):
	m_type(type),
	m_xp(0)
{
}

AMateria::AMateria( AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria( void ){}

AMateria::AMateria( void ){}

//=========== FONCTIONS MEMBRES ==============//

std::string const & AMateria::getType( void ) const { return this->m_type; }
unsigned int AMateria::getXP( void ) const { return this->m_xp; }

void	AMateria::use(ICharacter & target)
{
	(void)target;
	this->m_xp += 10;
}

//=========== OPERATEURS MEMBRES ==============//

AMateria & AMateria::operator=( AMateria const &other )
{
	m_type = other.m_type;
	m_xp = other.m_xp;

	return *this;
}