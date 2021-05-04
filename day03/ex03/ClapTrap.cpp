#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) :
	m_hitPoints(100),
	m_maxHitPoints(100),
	m_energyPoints(100),
	m_maxEnergyPoints(100),
	m_level(1),
	m_name(name)
{
		std::cout << "CL4G-TP New " << name << ": Clapping your mouth bruh !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "CL4P-TP copy from " << src.m_name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "CL4P-TP Delete " << m_name << ": arrivederci, hombres !" << std::endl;
	return;
}

ClapTrap::ClapTrap() {}

//=========== FONCTIONS MEMBRES ==============//

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (m_armorDamageReduction > amount)
		amount = 0;
	else
		amount -= m_armorDamageReduction;
	if (amount > m_hitPoints)
		m_hitPoints = 0;
	else
		m_hitPoints -= amount;
	std::cout << m_name << " takes " << amount << " damages ! " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << m_name << " attacks " << target << " at a safe distance, dealing " << m_rangedAttackDamage << " damages !" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << m_name << " attacks " << target << " at close combat, dealing " << m_meleeAttackDamage << " damages !" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitPoints + amount > m_maxHitPoints)
	{
		m_hitPoints = m_maxHitPoints;
		std::cout << m_name << " is at maximum hp's ! " << m_hitPoints << "/" << m_maxHitPoints << std::endl;

	}
	else
	{
		m_hitPoints += amount;
		std::cout << m_name << " gets healed for " << amount << " hp's ! " << m_hitPoints << "/" << m_maxHitPoints << std::endl;
	}
}

std::string const &ClapTrap::getName(void) const
{
	return (this->m_name);
}

//=========== OPERATEURS MEMBRES ==============//

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	m_hitPoints = other.m_hitPoints;
    m_maxHitPoints = other.m_maxHitPoints;
    m_energyPoints = other.m_energyPoints;
    m_maxEnergyPoints = other.m_maxEnergyPoints;
    m_level = other.m_level;
    m_meleeAttackDamage = other.m_meleeAttackDamage;
    m_rangedAttackDamage = other.m_rangedAttackDamage;
    m_armorDamageReduction = other.m_armorDamageReduction;

	return *this;
}