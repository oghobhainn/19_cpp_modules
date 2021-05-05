#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle () :
	AWeapon("Plasma Rifle", 21, 5)
{}

PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &other)
{
	m_name		= other.m_name;
	m_apcost	= other.m_apcost;
	m_damage	= other.m_damage;

	return *this;
}