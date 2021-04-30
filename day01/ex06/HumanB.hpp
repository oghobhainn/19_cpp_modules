#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

	public:
		HumanB(std::string const& name);
		void	setWeapon(Weapon & weapon);
		void	attack();

	private:
		std::string		m_name;
		Weapon			*m_weapon;

};

#endif