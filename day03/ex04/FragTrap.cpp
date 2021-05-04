#include "FragTrap.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

FragTrap::FragTrap(std::string const &name) :
	ClapTrap(name)
{
	m_meleeAttackDamage = 30;
	m_rangedAttackDamage = 20;
	m_armorDamageReduction = 5;
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