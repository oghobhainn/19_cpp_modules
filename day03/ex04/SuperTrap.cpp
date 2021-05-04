#include "SuperTrap.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

SuperTrap::SuperTrap(std::string const &name) :
	NinjaTrap(name),
	FragTrap(name)
{
	m_hitPoints = this->FragTrap::m_hitPoints;
	m_maxHitPoints = this->FragTrap::m_maxHitPoints;
	m_energyPoints = this->NinjaTrap::m_energyPoints;
	m_maxEnergyPoints = this->NinjaTrap::m_maxEnergyPoints;
	m_meleeAttackDamage = this->NinjaTrap::m_meleeAttackDamage;
	m_rangedAttackDamage = this->FragTrap::m_rangedAttackDamage;
	m_armorDamageReduction = this->FragTrap::m_armorDamageReduction;
 	std::cout << "SUP3R-TP New " << name << ": the 'S' stands for 'S*ck it, loser !'" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	std::cout << "SUP3R-TP copy from " << src.m_name << std::endl;
	*this = src;
}

SuperTrap::~SuperTrap ( void )
{
	std::cout << "SUP3R-TP Delete " << m_name << ": this world doesn't deserve me" << std::endl;
	return;
}

SuperTrap::SuperTrap() {}

//=========== FONCTIONS MEMBRES ==============//


void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

//=========== OPERATEURS MEMBRES ==============//

SuperTrap	&SuperTrap::operator=(SuperTrap const &other)
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