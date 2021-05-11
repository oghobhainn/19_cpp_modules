#include "Character.hpp"


//=========== CONSTRUCTORS / DESTRUCTORS ==============//

Character::Character( std::string const & name):
	m_name(name),
	m_nbItems(0)
{
	int i = 0;
	while (i < 4){
		this->m_inventory[i] = nullptr;
		i++;
	}
	std::cout << "Hello ! I'm " << m_name << " and my bag is empty for the moment" << std::endl;
}

Character::Character( Character const &other ):
	m_name(other.m_name),
	m_nbItems(0)
{
	int i = 0;
	while (i < 4){
		this->m_inventory[i] = nullptr;
		i++;
	}
	i = 0;
	while (i < other.m_nbItems)
	{
		this->equip(other.m_inventory[i]->clone());
		i++;
	}
}

Character::~Character()
{
	int i = 0;
	while (i < this->m_nbItems)
	{
		delete this->m_inventory[i];
		i++;
	}
}

//=========== FONCTIONS MEMBRES ==============//

std::string const &Character::getName( void ) const { return this->m_name;}
//AMateria* const &Character::getInventory( void ) const { return *this->m_inventory;}

void	Character::equip( AMateria *m)
{
	if (m == nullptr || this->m_nbItems == 4)
		return ;
	else
	{
		this->m_inventory[m_nbItems] = m;
		m_nbItems++;
	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= this->m_nbItems || this->m_inventory[idx] == nullptr)
		return ;
	int i = idx;
	while ( i < m_nbItems )
	{
		this->m_inventory[i] = this->m_inventory[i + 1];
		i++;
	}
	this->m_inventory[i + 1] = nullptr;
	this->m_nbItems--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->m_nbItems || this->m_inventory[idx] == nullptr)
		return ;
	this->m_inventory[idx]->use(target);
}

//=========== OPERATEURS MEMBRES ==============//

Character &Character::operator=( Character const &other )
{
	int i = 0;

	this->m_name = other.m_name;
	while (i < this->m_nbItems)
	{
		delete this->m_inventory[i];
		i++;
	}
	this->m_nbItems = 0;
	i = 0;
	while (i < 4){
		this->m_inventory[i] = nullptr;
		i++;
	}
	i = 0;
	while (i < other.m_nbItems)
	{
		this->equip(other.m_inventory[i]->clone());
		i++;
	}

	return (*this);
}
