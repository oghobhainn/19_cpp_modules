#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

	public:
		Weapon(std::string weapon_type);
		
		std::string const& getType() const;
		void setType(std::string const& type);

	private:
		std::string type; //not m_type or _type, thanks to the subject...

};

#endif