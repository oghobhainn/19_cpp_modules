#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class	ZombieEvent
{

	public:
		void	setZombieType(std::string const& type);
		Zombie*	newZombie(std::string name); //prototype doesn't need the ref &
		Zombie*	randomChump();

	private:
		std::string m_type;

};

#endif
