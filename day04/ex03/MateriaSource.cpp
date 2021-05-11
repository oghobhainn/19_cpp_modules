#include "MateriaSource.hpp"

//=========== CONSTRUCTORS / DESTRUCTORS ==============//

MateriaSource::MateriaSource():
	m_nbMaterias(0)
{
	int i = 0;
	while (i < 4)
	{
		this->m_sources[i] = nullptr;
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &other):
	m_nbMaterias(0)
{
 	int i = 0;
	while (i < 4)
	{
		this->m_sources[i] = nullptr;
		i++;
	}
	i = 0;
	while (i < m_nbMaterias)
	{
		this->learnMateria(other.m_sources[i]->clone());
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < this->m_nbMaterias)
	{
		delete this->m_sources[i];
		i++;
	}
}

//=========== FONCTIONS MEMBRES ==============//

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->m_nbMaterias == 4 || m == nullptr)
		return;
	this->m_sources[this->m_nbMaterias] = m;
	this->m_nbMaterias++;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < this->m_nbMaterias)
	{
		if (this->m_sources[i]->getType() == type)
			return (this->m_sources[i]->clone());
		i++;
	}
	return nullptr;
}

//=========== OPERATEURS MEMBRES ==============//

MateriaSource &MateriaSource::operator=(MateriaSource const & other)
{
	int i = 0;
	while (i < this->m_nbMaterias)
	{
		delete this->m_sources[i];
		this->m_nbMaterias--;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		this->m_sources[i] = nullptr;
		i++;
	}
	i = 0;
	while (i < other.m_nbMaterias)
	{
		this->learnMateria(other.m_sources[i]->clone());
		i++;
	}
	return (*this);
}