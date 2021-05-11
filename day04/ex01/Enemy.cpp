#include "Enemy.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Enemy::Enemy( int hp, std::string const &type ) :
        m_type(type),
		m_hp(hp)
{
        std::cout << "New Enemy: <" << m_type << "> <" << m_hp << " hp>" << std::endl;
}

Enemy::Enemy( Enemy const &other)
{
        std::cout << "New Enemy: <" << m_type << "> <" << m_hp << " hp>" << std::endl;
        *this = other;
}

Enemy::~Enemy( void ) {}

Enemy::Enemy( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string		Enemy::getType( void ) const { return this->m_type; }
int				Enemy::getHp( void ) const { return this-> m_hp; }

void			Enemy::takeDamage( int amount )
{
	if (this->m_hp > amount && amount > 0)
	{
		this->m_hp -= amount;
	}
	else
	{
		this->m_hp = 0;
		delete this;
	}
	return ;
}

//=========== OPERATEURS MEMBRES ==============//

Enemy & Enemy::operator=(Enemy const &other)
{
        m_type          = other.m_type;
        m_hp			= other.m_hp;

        return *this;
}