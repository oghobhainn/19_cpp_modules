#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap{
	
	public:
		
		FragTrap(FragTrap const &);
		FragTrap(std::string const &name);
		~FragTrap();
		
		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

		FragTrap& operator=(FragTrap const &);

	private:

		unsigned int	m_hitPoints;
		unsigned int	m_maxHitPoints;
		unsigned int	m_energyPoints;
		unsigned int	m_maxEnergyPoints;
		unsigned int	m_level;
		std::string		m_name;
		unsigned int	m_meleeAtkDmg;
		unsigned int	m_rangedAtkDmg;
		unsigned int	m_armorDmgRed;

		FragTrap();
};

#endif