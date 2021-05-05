#include "RadScorpion.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

RadScorpion::RadScorpion( void ) :
        Enemy(80, "RadScorpion")
{
        std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const &other)
{
        std::cout << "* click click click *" << std::endl;
        *this = other;
}

RadScorpion::~RadScorpion( void )
{
	std::cout << "* SPROTCH *" << std::endl;
}

//=========== FONCTIONS MEMBRES ==============//

std::string		RadScorpion::getType( void ) const { return this->m_type; };

//=========== OPERATEURS MEMBRES ==============//

RadScorpion & RadScorpion::operator=(RadScorpion const &other)
{
        m_type          = other.m_type;
        m_hp			= other.m_hp;

        return *this;
}