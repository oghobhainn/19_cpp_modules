#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		Zombie(std::string const& name, std::string const& type);
		~Zombie();
		void	announce() const;

	private:
		std::string m_name;
		std::string m_type;
};

#endif
