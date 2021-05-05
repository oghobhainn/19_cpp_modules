#include "Peon.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Peon::Peon(std::string const &name) :
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const &other)
{
	std::cout << "Zog zog." << std::endl;
	*this =other;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}
	
Peon::Peon( void ) {}

//=========== FONCTIONS MEMBRES ==============//

void	Peon::getPolymorphed( void ) const 
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
	return ;
}

//=========== OPERATEURS MEMBRES ==============//

Peon & Peon::operator=(Peon const &other)
{
	m_name = other.m_name;

    return *this;
}

std::ostream & operator<<(std::ostream &out, Peon const &rhs)
{
	out << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return out;
}