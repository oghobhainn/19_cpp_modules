#include "Ice.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(Ice const &other):
	AMateria("ice")
{
	this->m_xp = other.m_xp;
}

Ice::~Ice( void ) {}

//=========== FONCTIONS MEMBRES ==============//

AMateria *Ice::clone( void ) const
{
	Ice *clone = new Ice(*this);
	return clone;
}

void	Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

}

//=========== OPERATEURS MEMBRES ==============//

Ice &Ice::operator=( Ice const &other )
{
	this->m_xp = other.m_xp;
	return (*this);
}
