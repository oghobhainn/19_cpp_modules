#include "Cure.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(Cure const &other):
	AMateria("cure")
{
	this->m_xp = other.m_xp;
}

Cure::~Cure( void ) {}

//=========== FONCTIONS MEMBRES ==============//

AMateria *Cure::clone( void ) const
{
	Cure *clone = new Cure(*this);
	return clone;
}

void	Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}

//=========== OPERATEURS MEMBRES ==============//

Cure &Cure::operator=( Cure const &other )
{
	this->m_xp = other.m_xp;
	return (*this);
}
