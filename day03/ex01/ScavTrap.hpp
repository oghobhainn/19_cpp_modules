#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
	public:
		ScavTrap(ScavTrap const &);
		ScavTrap(std::string const &name);
		~ScavTrap();
		
		void	meleeAttack(std::string const &target);
		void	rangedAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer( void );

		ScavTrap& operator=(ScavTrap const &);

	private:
		unsigned int			m_hitPoints;
		unsigned int			m_maxHitPoints;
		unsigned int			m_energyPoints;
		unsigned int			m_maxEnergyPoints;
		unsigned int			m_level;
		std::string				m_name;
		unsigned int			m_meleeAttackDamage;
		unsigned int			m_rangedAttackDamage;
		unsigned int			m_armorDamageReduction;

		ScavTrap();
};

#endif