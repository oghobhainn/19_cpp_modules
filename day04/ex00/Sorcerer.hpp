#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>

#include "Victim.hpp"

class Sorcerer
{
	
	public:
		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &other);
		~Sorcerer();

		Sorcerer& operator=(Sorcerer const &);

		std::string	getName() const;
		std::string	getTitle() const;

		void	polymorph(Victim const &) const;

	protected:
		
	private:
		std::string		m_name;
		std::string		m_title;
		Sorcerer();
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & raw);

#endif