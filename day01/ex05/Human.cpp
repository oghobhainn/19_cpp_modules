#include "Human.hpp"

Human::Human(): m_brain() {}

std::string		Human::identify() const
{
	return m_brain.identify();
}

Brain const & Human::getBrain() const
{
	return m_brain;
}

Human::~Human() {};