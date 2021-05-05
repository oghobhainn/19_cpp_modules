#include "Feather.hpp"

Feather::Feather () :
	AWeapon("Feather", 5, 120)
{}

Feather::~Feather() {}

void	Feather::attack( void ) const
{
	std::cout << "..." << std::endl;
}

Feather & Feather::operator=(Feather const &other)
{
	m_name		= other.m_name;
	m_apcost	= other.m_apcost;
	m_damage	= other.m_damage;

	return *this;
}