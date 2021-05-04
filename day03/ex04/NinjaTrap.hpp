#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	
	public:
		
		NinjaTrap(NinjaTrap const &);
		NinjaTrap(std::string const &name);
		~NinjaTrap();
		
		void	ninjaShoeBox(NinjaTrap const &nt);
		void	ninjaShoeBox(ScavTrap const &ct);
		void	ninjaShoeBox(FragTrap const &ft);

		NinjaTrap& operator=(NinjaTrap const &);

	protected:

		std::string		m_name;

		NinjaTrap();
};

#endif