#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) : type(weapon_type)
{

}

std::string const& Weapon::getType() const
{
	return type; //m_type
}

void Weapon::setType(std::string const& weapon_type)
{
	type = weapon_type; //m_type = weapon_type
}