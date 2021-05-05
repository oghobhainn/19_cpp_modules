#include "Character.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Character::Character( std::string const &name ) :
        m_name(name),
        m_ap(40),
		m_weapon(NULL),
		m_maxAp(m_ap)
{
}

Character::Character( Character const &other)
{
        *this = other;
}

Character::~Character( void )
{
	std::cout << "NOOOO THERE ARE TOO MANY OF THESE MONSTEEEERS * " << m_name << " dies *" << std::endl; 
}

Character::Character( void ) {}

//=========== FONCTIONS MEMBRES ==============//

std::string		Character::getName( void ) const { return m_name; }
AWeapon*		Character::getWeapon( void ) const { return m_weapon; }
int				Character::getAp( void ) const { return m_ap; }
int				Character::getMaxAp( void ) const { return m_maxAp; }

void	Character::recoverAP( void )
{
	if (m_ap < m_maxAp - 10)
	{
		m_ap += 10;
	}
	else
	{
		m_ap = m_maxAp;	
	}
	
	return ;
}

void	Character::equip(AWeapon *weapon)
{
	m_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	std::cout << getName() << " attacks " << enemy->getType() << " with a " << getWeapon()->getName() << std::endl;
	if (m_ap > getWeapon()->getAPCost())
	{
		m_ap -= getWeapon()->getAPCost();
		enemy->takeDamage(getWeapon()->getDamage());
	}
	else
	{
		std::cout << getName() << " needs some redbull, he has not enough AP for that !" << std::endl;
	}
	
	
}

//=========== OPERATEURS MEMBRES ==============//

Character & Character::operator=(Character const &other)
{
        m_name		= other.m_name;
        m_weapon	= other.m_weapon;
		m_ap		= other.m_ap;
		m_maxAp		= other.m_maxAp;

        return *this;
}

std::ostream & operator<<(std::ostream &out, Character const &rhs)
{
	if (rhs.getWeapon() == NULL)
	{
		out << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl; 
	}
	else
	{
		out << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl; 
	}
	
        return out;
}