#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	
	public:
		Victim(std::string const &name);
		Victim(Victim const &other);
		virtual ~Victim();

		Victim& operator=(Victim const &);

		std::string	getName() const;

		virtual void	getPolymorphed() const;

	protected:
		std::string		m_name;
		Victim();

	private:
};

std::ostream & operator<<(std::ostream & o, Victim const & raw);

#endif