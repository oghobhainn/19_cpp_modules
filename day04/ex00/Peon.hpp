#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string const &name);
		Peon(Peon const &other);
		~Peon();

		Peon& operator=(Peon const &);

		void	getPolymorphed() const;

	
	protected:

	private:
		Peon();
};

#endif