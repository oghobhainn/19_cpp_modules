#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon //abstract class...
{
	public:
		AWeapon( std::string const &name, int apcost, int damage);
		AWeapon( AWeapon const & );
		virtual ~AWeapon();

		AWeapon & operator=(AWeapon const &);

		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0; //==> ...because of this

	protected:
		AWeapon();
		std::string		m_name;
		int				m_damage;
		int				m_apcost;
	
	private:		
};

#endif