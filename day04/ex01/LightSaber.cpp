#include "LightSaber.hpp"

LightSaber::LightSaber () :
	AWeapon("LightSaber", 35, 17)
{}

LightSaber::~LightSaber() {}

void	LightSaber::attack( void ) const
{
	std::cout << "* Vziuu... wiooon *" << std::endl;
}

LightSaber & LightSaber::operator=(LightSaber const &other)
{
	m_name		= other.m_name;
	m_apcost	= other.m_apcost;
	m_damage	= other.m_damage;

	return *this;
}