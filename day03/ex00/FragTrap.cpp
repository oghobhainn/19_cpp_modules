#include "FragTrap.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

FragTrap::FragTrap(std::string const &name) :
	m_hitPoints(100),
	m_maxHitPoints(100),
	m_energyPoints(100),
	m_maxEnergyPoints(100),
	m_level(1),
	m_name(name),
	m_meleeAttackDamage(30),
	m_rangedAttackDamage(20),
	m_armorDamageReduction(5)
{
		std::cout << "FR4G-TP New " << name << ": here to kick some donkeys" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FR4G-TP copy from " << src.m_name << std::endl;
	*this = src;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "FR4G-TP Delete " << m_name << ": out of donkeys to kick" << std::endl;
	return;
}

FragTrap::FragTrap() {}
//=========== FONCTIONS MEMBRES ==============//

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at a safe distance, dealing " << m_rangedAttackDamage << "damages !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at close combat, dealing " << m_meleeAttackDamage << "damages !" << std::endl;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (m_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << m_name << " needs a redbull 'coz he doesn't have enough energy..." << std::endl;
		return ;
	}
	m_energyPoints -= 25;
	
	std::string attacks[5] = {
		"'swings his lightsaber'",
		"'boring him to death with philospohy explanations'",
		"'calling his mom that destroys him'",
		"'convincing him to swallow his own tongue through good persuasion'",
		"'giving him some nuts... too bad, he's allergic'"
	};
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " by " << attacks[rand() % 5] << std::endl;
}

//=========== OPERATEURS MEMBRES ==============//

FragTrap	&FragTrap::operator=(FragTrap const &other)
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
