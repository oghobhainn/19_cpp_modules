#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Human
{

private:
	Brain const m_brain;

public:

	Human();
	std::string	identify() const;
	Brain const & getBrain() const;
	~Human();
};

#endif