#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	
	public:
		
		FragTrap(FragTrap const &);
		FragTrap(std::string const &name);
		~FragTrap();
		
		void	vaulthunter_dot_exe(std::string const &target);

		FragTrap& operator=(FragTrap const &);

	protected:

		std::string		m_name;

		FragTrap();
};

#endif