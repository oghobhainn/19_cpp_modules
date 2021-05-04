#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP


#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(SuperTrap const &);
		SuperTrap(std::string const &name);
		~SuperTrap();
		
		SuperTrap& operator=(SuperTrap const &);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
	
	protected:

		std::string		m_name;

		SuperTrap();
};

#endif