#include "Victim.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Victim::Victim(std::string const &name) :
	m_name(name)
{
	std::cout << "Some random victim called " << m_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const &other)
{
	std::cout << "Some random victim called " << other.m_name << " just appeared!" << std::endl;
	*this =other;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << m_name << " just died for no apparent reason!" << std::endl;
	return ;
}
	
Victim::Victim( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string	Victim::getName( void ) const { return m_name;}

void	Victim::getPolymorphed( void ) const 
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

//=========== OPERATEURS MEMBRES ==============//

Victim & Victim::operator=(Victim const &other)
{
	m_name = other.m_name;

    return *this;
}

std::ostream & operator<<(std::ostream &out, Victim const &rhs)
{
	out << "I am " << rhs.getName() << " and I like otters!" << std::endl;
	return out;
}