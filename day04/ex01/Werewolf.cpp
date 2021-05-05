#include "Werewolf.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Werewolf::Werewolf( void ) :
        Enemy(120, "Werewolf")
{
        std::cout << "** AOUUUUUUUH **" << std::endl;
}

Werewolf::Werewolf( Werewolf const &other)
{
        std::cout << "** AOUUUUUUUH**" << std::endl;
        *this = other;
}

Werewolf::~Werewolf( void )
{
	std::cout << "kai kai kai" << std::endl;
}

//=========== FONCTIONS MEMBRES ==============//

std::string		Werewolf::getType( void ) const { return this->m_type; };

void			Werewolf::takeDamage( int amount )
{
	amount += 5;

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

//=========== OPERATEURS MEMBRES ==============//

Werewolf & Werewolf::operator=(Werewolf const &other)
{
        m_type          = other.m_type;
        m_hp			= other.m_hp;

        return *this;
}