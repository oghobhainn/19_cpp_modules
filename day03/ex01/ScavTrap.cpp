#include "ScavTrap.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

ScavTrap::ScavTrap(std::string const &name) :
	m_hitPoints(100),
	m_maxHitPoints(100),
	m_energyPoints(50),
	m_maxEnergyPoints(50),
	m_level(1),
	m_name(name),
	m_meleeAttackDamage(20),
	m_rangedAttackDamage(15),
	m_armorDamageReduction(3)
{
		std::cout << "SC4V-TP New " << name << ": I'm gonna finish you so bad your mom'll only recognize your bag's color." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "SC4V-TP copy from " << src.m_name << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "SC4V-TP Delete " << m_name << ": pick ur teeth on the ground before you leave." << std::endl;
	return;
}

ScavTrap::ScavTrap() {}

//=========== FONCTIONS MEMBRES ==============//

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << m_name << " attacks " << target << " from further that the eye sees, dealing " << m_rangedAttackDamage << "damages !" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << m_name << " attacks " << target << " conor mc gregor'style, dealing " << m_meleeAttackDamage << "damages !" << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer( void )
{
	if (m_energyPoints < 25)
	{
		std::cout << "SC4V-TP " << m_name << "'s energy pit is flatter than Earth, he can't do a new challenge..." << std::endl;
		return ;
	}
	m_energyPoints -= 25;

	std::string challenges[5] = {
		"reaching the sun with an arrow",
		"beating the 19's cursus in less than a year",
		"stealing the wooden leg of a true pirate",
		"eating only cheese for a week",
		"stand in front of a mirror for 8 hours straight"
	};
	std::cout << "SC4V-TP " << m_name << " is challenged by " << challenges[rand() % 5] << std::endl;
}

//=========== OPERATEURS MEMBRES ==============//

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
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