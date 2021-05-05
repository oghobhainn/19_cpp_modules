#include "Sorcerer.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Sorcerer::Sorcerer(std::string const &name, std::string const &title) :
	m_name(name),
	m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	std::cout << other.m_name << ", " << other.m_title << ", is born!" << std::endl;
	*this =other;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}
	
Sorcerer::Sorcerer( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string	Sorcerer::getName() const { return m_name;}
std::string	Sorcerer::getTitle() const { return m_title;}

void	Sorcerer::polymorph( Victim const & victim) const
{
	victim.getPolymorphed();
}

//=========== OPERATEURS MEMBRES ==============//

Sorcerer & Sorcerer::operator=(Sorcerer const &other)
{
	m_name = other.m_name;
	m_title = other.m_title;

    return *this;
}

std::ostream & operator<<(std::ostream &out, Sorcerer const &rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}