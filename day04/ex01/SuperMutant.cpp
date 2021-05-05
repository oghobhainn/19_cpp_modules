#include "SuperMutant.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

SuperMutant::SuperMutant( void ) :
        Enemy(170, "Super Mutant")
{
        std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const &other)
{
        std::cout << "Gaaah. Me want smash heads!" << std::endl;
        *this = other;
}

SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh..." << std::endl;
}

//=========== FONCTIONS MEMBRES ==============//

void			SuperMutant::takeDamage( int amount )
{
	amount -= 3;

	if (this->m_hp > amount && amount > 0)
	{
		this->m_hp -= amount;
	}
	else
	{
		this->m_hp = 0;
	}
	return ;
}

std::string		SuperMutant::getType( void ) const { return this->m_type; };

//=========== OPERATEURS MEMBRES ==============//

SuperMutant & SuperMutant::operator=(SuperMutant const &other)
{
        m_type          = other.m_type;
        m_hp			= other.m_hp;

        return *this;
}