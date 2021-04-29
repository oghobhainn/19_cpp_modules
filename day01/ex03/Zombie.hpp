#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string const& name, std::string const& type);
		~Zombie();
		void	announce() const;
		void	setName(std::string const& name);
		void	setType(std::string const& type);

	private:
		std::string m_name;
		std::string m_type;
};

#endif
