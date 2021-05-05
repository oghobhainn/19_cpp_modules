#include "AWeapon.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

AWeapon::AWeapon( std::string const &name, int apcost, int damage) :
	m_name(name),
	m_damage(damage),
	m_apcost(apcost)
{
	std::cout << "New weapon: <" << m_name << "> <" << m_apcost << "> apcost <" << m_damage << "> damage" << std::endl;
}

AWeapon::AWeapon( AWeapon const &other)
{
	std::cout << "New weapon: <" << m_name << "> <" << m_apcost << "> apcost <" << m_damage << "> damage" << std::endl;
	*this = other;
}

AWeapon::~AWeapon( void ) {}

AWeapon::AWeapon( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string AWeapon::getName( void ) const { return this->m_name; }
int			AWeapon::getAPCost( void ) const { return this->m_apcost; }
int			AWeapon::getDamage( void ) const { return this->m_damage; }

//=========== OPERATEURS MEMBRES ==============//

AWeapon & AWeapon::operator=(AWeapon const &other)
{
	m_name		= other.m_name;
	m_apcost	= other.m_apcost;
	m_damage	= other.m_damage;

	return *this;
}