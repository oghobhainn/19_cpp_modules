#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(ScavTrap const &);
		ScavTrap(std::string const &name);
		~ScavTrap();
		
		void	challengeNewcomer( void );

		ScavTrap& operator=(ScavTrap const &);

	protected:

		std::string		m_name;

		ScavTrap();
};

#endif