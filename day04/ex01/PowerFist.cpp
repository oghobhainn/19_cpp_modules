#include "PowerFist.hpp"

PowerFist::PowerFist () :
	AWeapon("Power Fist", 50, 8)
{}

PowerFist::~PowerFist() {}

void	PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist & PowerFist::operator=(PowerFist const &other)
{
	m_name		= other.m_name;
	m_apcost	= other.m_apcost;
	m_damage	= other.m_damage;

	return *this;
}