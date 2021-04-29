#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();
		void	announce() const;

	private:
		int		m_size;
		Zombie*	m_horde;
};

#endif