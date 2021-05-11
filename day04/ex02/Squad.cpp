#include "Squad.hpp"

Squad::Squad() :
	m_count(0),
	m_units(nullptr)
{
}

Squad::Squad(Squad const &other)
{
	this->m_count = other.m_count;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->m_units)
	{
		for (int i = 0; i < this->m_count; i++)
			delete this->m_units[i];
		delete this->m_units;
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this->m_units)
	{
		for (int i = 0; i < this->m_count; i++)
			delete this->m_units[i];
		delete this->m_units;
		this->m_units = nullptr;
	}
	this->m_count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const { return this->m_count; }

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->m_count == 0 || index < 0 || index >= m_count)
		return (nullptr);
	return (this->m_units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (unit == nullptr) // (!unit)
		return (this->m_count);
	if (this->m_units)
	{
		for (int i = 0; i < this->m_count; i++) //checkin if already present
			if (this->m_units[i] == unit)
				return (this->m_count);
		ISpaceMarine **cpy = new ISpaceMarine* [this->m_count + 1];
		for (int i = 0; i < this->m_count; i++)
			cpy[i] = this->m_units[i];
		delete[] this->m_units;
		this->m_units = cpy;
		this->m_units[this->m_count] = unit;
		this->m_count++;
	}
	else
	{
		this->m_units = new ISpaceMarine* [1];
		this->m_units[0] = unit;
		this->m_count = 1;
	}
	return (this->m_count);
}
