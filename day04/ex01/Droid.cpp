#include "Droid.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Droid::Droid( void ) :
        Enemy(80, "Droid")
{
        std::cout << "Hello There..." << std::endl;
}

Droid::Droid( Droid const &other)
{
        std::cout << "Hello There..." << std::endl;
        *this = other;
}

Droid::~Droid( void )
{
	std::cout << "Good Bye, General Kenobi !" << std::endl;
}

//=========== FONCTIONS MEMBRES ==============//

std::string		Droid::getType( void ) const { return this->m_type; };

//=========== OPERATEURS MEMBRES ==============//

Droid & Droid::operator=(Droid const &other)
{
        m_type          = other.m_type;
        m_hp			= other.m_hp;

        return *this;
}