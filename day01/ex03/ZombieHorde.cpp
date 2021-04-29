#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : m_size(n)
{
	if (n < 0)
	{
		std::cerr << "The size of the horde can't be negative" << std::endl;
		m_horde = NULL;
		return ;
	}
	std::string name_pool[10] = {
		"cmcgahan",
		"Bea_Kiddo",
		"Boaty-Mc-BoatyFace",
		"NoPainNoGain",
		"CucumBruh",
		"Andre-Charles",
		"Dipper",
		"Bill",
		"Mr.Corleone",
		"NaNaNaBatman"
	};
	std::string type_pool[4] = {
		"Warrior",
		"Priest",
		"Karen",
		"Bocalien"
	};
	m_horde = new Zombie[m_size];
	for (int i = 0; i < m_size; i++)
		m_horde[i].setName(name_pool[rand() % 10]);
	for (int i = 0; i < m_size; i++)
		m_horde[i].setType(type_pool[rand() % 4]);
}

ZombieHorde::~ZombieHorde()
{
	if (m_horde == NULL)
		return ;
	delete [] m_horde;
}

void	ZombieHorde::announce() const
{
	if (m_horde == NULL)
		return;
	for (int i = 0; i < m_size; i++)
		m_horde[i].announce();
}