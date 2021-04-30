#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string const& name) : m_name(name)
{

}

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	m_weapon = &weapon;
}