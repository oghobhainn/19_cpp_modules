#include "NinjaTrap.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

NinjaTrap::NinjaTrap(std::string const &name) :
	ClapTrap(name)
{
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_meleeAttackDamage = 60;
	m_rangedAttackDamage = 5;
	m_armorDamageReduction = 0;
 	std::cout << "NINJ4-TP New " << name << ": here to kick some donkeys" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	std::cout << "NINJ4-TP copy from " << src.m_name << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap ( void )
{
	std::cout << "NINJ4-TP Delete " << m_name << ": out of donkeys to kick" << std::endl;
	return;
}

NinjaTrap::NinjaTrap() {}

//=========== FONCTIONS MEMBRES ==============//

void	NinjaTrap::ninjaShoeBox(NinjaTrap const &nt)
{
	std::cout << "You can't see me anymore... THIS. IS. JOHN CENAAAAAAA" << std::endl;
	std::cout << " ** wild balayette appears out of nowhere and kicks " << nt.getName() <<" ** " << std::endl;

	return ;
}

void	NinjaTrap::ninjaShoeBox(FragTrap const &ft)
{
	std::cout << "* reloads sniper *" << std::endl;
	std::cout << " ** HEADSHOT ** " << ft.getName() << " has a subit headache."<<std::endl;
	

	return ;

}

void	NinjaTrap::ninjaShoeBox(ScavTrap const &st)
{
	std::cout << "Shi... Fu... Mi... FU !" << std::endl;
	std::cout << st.getName() << " ** performs Hara Kiri under the eyes of his ancestors ** " << std::endl;

	return ;

}

//=========== OPERATEURS MEMBRES ==============//

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &other)
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
