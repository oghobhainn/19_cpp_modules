#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string const& name, Weapon const& weapon) : m_name(name), m_weapon(weapon)
{

}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}