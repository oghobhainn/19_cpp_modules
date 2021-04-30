#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

	public:
		HumanA(std::string const& name, Weapon const& weapon);
		void	attack();

	private:
		std::string		m_name;
		Weapon const&	m_weapon;
};

#endif